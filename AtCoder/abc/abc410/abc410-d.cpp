#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main() {
	int N, M;
	cin >> N >> M;
	Graph G(N);

    vector<int> W;
	for (int i = 0; i < M; ++i) {
		int A, B;
        int w;
		cin >> A >> B>>w;

		G[A].push_back(B);
        W.push_back(w);
	}

    

    
}