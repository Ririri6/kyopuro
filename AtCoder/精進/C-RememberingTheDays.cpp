#include <bits/stdc++.h>
using namespace std;

// グラフを表すデータ構造
using Graph = vector<vector<int>>;

int main() {
	// 入力
	int N, M;
	cin >> N >> M;
	Graph G(N);
    vector<long long> C(M);
    vector<long long> A(N);
    vector<long long> B(N);
	for (int i = 0; i < M; ++i) {
		int a, b;
		cin >> a >> b>>C[i];
        
         A[i]=a;
         B[i]=b;
         
		// 頂点 A から頂点 B への辺を張る
		G[a].push_back(b);
		
		// 無向グラフの場合は次も実施
		G[b].push_back(a);
	}

    
}