#include <bits/stdc++.h>
using namespace std;

// グラフを表すデータ構造
using Graph = vector<vector<int>>;

int main() {
	// 入力
	int N, M;
	cin >> N >> M;
	Graph G(N);
	for (int i = 0; i < M; ++i) {
		int A, B;
		cin >> A >> B;

		// 頂点 A から頂点 B への辺を張る
		G[A].push_back(B);
		
		// 無向グラフの場合は次も実施
		// G[B].push_back(A);
	}
}