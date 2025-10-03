#include <bits/stdc++.h>
using namespace std;

// グラフを表すデータ構造
using Graph = vector<vector<int>>;
vector<bool> visited(100009);
vector<int> v,ans;

void dfs(Graph &G,int pos,int n){
    if(pos==n) {
        ans=v;
        return;
    } // ゴールに到達したら true を返す
    
    visited[pos]=true;
    for(auto next:G[pos]){
        if(visited[next]==false){
           v.push_back(next);
           dfs(G,next,n);
           v.pop_back();//この部分が実行される＝ゴールに到達していない
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
    
    
    dfs(G,0,N-1);
    cout<<1<<" ";
    for(auto a:ans){
        cout<<a+1<<" ";
    }
    cout<<endl;
}