#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M;
    if(!(cin >> N >> M)) return 0;
    vector<vector<int>> G(N);
    vector<pii> edges;
    edges.reserve(M);
    for(int i=0;i<M;i++){
        int u,v; cin >> u >> v; --u; --v;
        G[u].push_back(v);
        G[v].push_back(u);
        edges.emplace_back(u,v);
    }

    // 連結成分に分解
    vector<int> comp_id(N, -1);
    vector<int> stk;
    int comp_cnt = 0;
    for(int s=0;s<N;s++){
        if(comp_id[s]!=-1) continue;
        stk.clear();
        stk.push_back(s);
        comp_id[s]=comp_cnt;
        for(size_t idx=0; idx<stk.size(); ++idx){
            int u = stk[idx];
            for(int v: G[u]){
                if(comp_id[v]==-1){
                    comp_id[v]=comp_cnt;
                    stk.push_back(v);
                }
            }
        }
        comp_cnt++;
    }

    // 各成分ごとに頂点リストと辺リストを作る
    vector<vector<int>> comp_nodes(comp_cnt);
    vector<vector<pair<int,int>>> comp_edges(comp_cnt);
    for(int v=0; v<N; ++v) comp_nodes[comp_id[v]].push_back(v);
    for(auto &e: edges){
        int u=e.first, v=e.second;
        int cid = comp_id[u];
        // u and v in same comp
        comp_edges[cid].push_back(e);
    }

    ll kept_total = 0; // 各成分で残せる最大辺数の合計

    // helper: exact via bitmask for small k
    auto solve_exact = [&](const vector<int>& nodes, const vector<pair<int,int>>& eds)->int{
        int k = (int)nodes.size();
        vector<int> idx_map(N, -1);
        for(int i=0;i<k;i++) idx_map[nodes[i]] = i;
        int best = 0;
        int limit = 1<<k;
        for(int mask=0; mask<limit; ++mask){
            int cnt = 0;
            for(auto &e: eds){
                int a = idx_map[e.first], b = idx_map[e.second];
                if(((mask>>a)&1) != ((mask>>b)&1)) cnt++;
            }
            if(cnt>best) best=cnt;
        }
        return best;
    };

    // helper: local search approximate for larger k
    auto solve_local_search = [&](const vector<int>& nodes, const vector<pair<int,int>>& eds)->int{
        int k = (int)nodes.size();
        unordered_map<int, vector<int>> adj;
        adj.reserve(k*2);
        for(auto &v: nodes) adj[v] = vector<int>();
        for(auto &e: eds){
            adj[e.first].push_back(e.second);
            adj[e.second].push_back(e.first);
        }

        // function to compute cut size given assignment map (0/1)
        auto compute_cut = [&](const unordered_map<int,int>& part)->int{
            int c = 0;
            for(auto &e: eds){
                if(part.at(e.first) != part.at(e.second)) c++;
            }
            return c;
        };

        int best_cut = 0;
        // try several random restarts
        std::mt19937_64 rng(1234567);
        int TRIALS = 200;          // 試行回数（必要に応じ増やす）
        for(int t=0;t<TRIALS;t++){
            unordered_map<int,int> part;
            part.reserve(k*2);
            // random initial assignment
            for(auto v: nodes){
                part[v] = (rng() & 1);
            }

            bool improved = true;
            int iter = 0;
            while(improved && iter < 1000){ // 各試行の内側ループ反復制限
                improved = false;
                iter++;
                // examine vertices in random order
                vector<int> ord = nodes;
                for(size_t i=0;i<ord.size();++i){
                    int j = rng() % ord.size();
                    swap(ord[i], ord[j]);
                }
                for(int v: ord){
                    // compute gain of flipping v
                    int same=0, diff=0;
                    for(int nb: adj[v]){
                        if(part[nb] == part[v]) same++;
                        else diff++;
                    }
                    int gain = same - diff; // flipping makes gain positive if >0
                    if(gain > 0){
                        part[v] = 1 - part[v];
                        improved = true;
                    }
                }
            }
            int cur_cut = compute_cut(part);
            if(cur_cut > best_cut) best_cut = cur_cut;
            // small speedup: if best_cut equals number of edges in component, can't do better
            if(best_cut == (int)eds.size()) break;
        }
        return best_cut;
    };

    // solve per component
    for(int cid=0; cid<comp_cnt; ++cid){
        const auto &nodes = comp_nodes[cid];
        const auto &eds = comp_edges[cid];
        int k = (int)nodes.size();
        int ecount = (int)eds.size();
        if(ecount==0){
            // no edges in component
            continue;
        }

        // If already bipartite, we can keep all edges: quick check via BFS coloring
        vector<int> color_map(N, -1);
        bool is_bip = true;
        for(int v: nodes){
            if(color_map[v]!=-1) continue;
            queue<int> q;
            q.push(v); color_map[v]=0;
            while(!q.empty()){
                int u=q.front(); q.pop();
                for(int nb: G[u]){
                    if(comp_id[nb] != cid) continue;
                    if(color_map[nb]==-1){
                        color_map[nb] = color_map[u]^1;
                        q.push(nb);
                    } else if(color_map[nb] == color_map[u]){
                        is_bip = false;
                        break;
                    }
                }
                if(!is_bip) break;
            }
            if(!is_bip) break;
        }
        if(is_bip){
            kept_total += ecount;
            continue;
        }

        // else non-bipartite component -> need to compute maximum cut (approx/exact)
        int best_keep = 0;
        if(k <= 20){
            best_keep = solve_exact(nodes, eds); // exact
        } else {
            best_keep = solve_local_search(nodes, eds); // heuristic
            // Optionally, attempt one exact on smaller subgraphs of this component if needed.
        }
        kept_total += best_keep;
    }

    ll answer = (ll)M - kept_total;
    cout << answer << '\n';
    return 0;
}
