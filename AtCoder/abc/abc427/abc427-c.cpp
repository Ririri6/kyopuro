#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;

bool dfs(Graph &graph, vector<int> &colors, int vertex, int current_color) {
    colors[vertex] = current_color;
    for (int neighbor : graph[vertex]) {
        if (colors[neighbor] != -1) {
            if (colors[neighbor] == current_color) return false;
            continue;
        }
        if (!dfs(graph, colors, neighbor, 1 - current_color))
            return false;
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    Graph G(N);
    for (int i = 0; i < M; ++i) {
        int A, B;
        cin >> A >> B;
        A--; B--;
        G[A].push_back(B);
        G[B].push_back(A);
    }

    long long ans = 0;
    vector<int> colors(N, -1);
    bool is_bipartite = true;

    for (int i = 0; i < N; ++i) {
        if (colors[i] == -1) {
            if (!dfs(G, colors, i, 0)) {
                is_bipartite = false;
                break;
            }
        }
    }

    if (is_bipartite) {
        cout << ans << endl;
        return 0;
    }

    // --- 二部グラフでない場合 ---
    while (true) {
        // 最大次数頂点を選ぶ
        int max_v = 0, max_num = 0;
        for (int i = 0; i < N; ++i) {
            if ((int)G[i].size() > max_num) {
                max_num = G[i].size();
                max_v = i;
            }
        }

        if (G[max_v].empty()) break;  // もう削除できる辺がない

        // 隣接ノードの中で次数が大きい頂点を選ぶ
        vector<pair<int,int>> p;
        for (int g : G[max_v]) {
            p.push_back({(int)G[g].size(), g});
        }
        sort(p.rbegin(), p.rend());
        int pv = p.front().second;

        // 辺削除
        auto &d_u = G[max_v];
        d_u.erase(remove(d_u.begin(), d_u.end(), pv), d_u.end());

        auto &d_v = G[pv];
        d_v.erase(remove(d_v.begin(), d_v.end(), max_v), d_v.end());

        ans++;

        // 再チェック
        fill(colors.begin(), colors.end(), -1);
        is_bipartite = true;
        for (int i = 0; i < N; ++i) {
            if (colors[i] == -1) {
                if (!dfs(G, colors, i, 0)) {
                    is_bipartite = false;
                    break;
                }
            }
        }

        if (is_bipartite) {
            cout << ans << endl;
            return 0;
        }
    }

    cout << -1 << endl; // 二部化できなかった場合
}
