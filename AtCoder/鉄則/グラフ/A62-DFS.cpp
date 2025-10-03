#include <bits/stdc++.h>
using namespace std;
//DFSではスタートから初めてとりあえずゴールにたどり着きますが，
//その答えが最短である保証はどこにもありません
// グラフを表すデータ構造
using Graph = vector<vector<int>>;

vector<bool> visited(100009);
void dfs(Graph &G,int pos){
    visited[pos]=true;
    for(auto next:G[pos]){
        if(visited[next]==false){
            dfs(G,next);
        }
    }
    return;
}

int main() {
	// 入力
	int N, M;
	cin >> N >> M;
	Graph G(N);
	for (int i = 0; i < M; ++i) {
		int A, B;
		cin >> A >> B;
        A--;
        B--;
		// 頂点 A から頂点 B への辺を張る
		G[A].push_back(B);
		// 無向グラフの場合は次も実施
		G[B].push_back(A);
	}
    for(int i=0;i<N;i++){
       visited[i]=false;
    }
    dfs(G,0);
    string ans="The graph is connected.";
    for(int i=0;i<N;i++){
        if(visited[i]==false){
           ans="The graph is not connected.";
        }
    }

    cout<<ans<<endl;
}