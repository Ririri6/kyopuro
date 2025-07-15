#include <bits/stdc++.h>
using namespace std;

// グラフを表すデータ構造
using Graph = vector<vector<long long>>;

int main() {
	// 入力
	long long N, M;
	cin >> N >> M;

    vector<long long> H(N);
    for(int i=0;i<N;i++){
        cin>>H[i];
    }



	Graph G(N);
    Graph D(N);
	for (int i = 0; i < M; ++i) {
		long long A, B;
		cin >> A >> B;

        A--;
        B--;

		// 頂点 A から頂点 B への辺を張る
        
		  G[A].push_back(B);
          G[B].push_back(A);
        if(H[A]>H[B]){
            D[A].push_back(B);
        }else if(H[A]<H[B]){
            D[B].push_back(A);
        }
		
	}

    long long ans=0;
    for(int i=0;i<N;i++){
        if(D[i].size()==G[i].size()){
            ans++;
        }
    }

    cout<<ans<<endl;
}