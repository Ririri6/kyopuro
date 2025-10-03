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

        A--;
        B--;

		// 頂点 A から頂点 B への辺を張る
		G[A].push_back(B);
		
		// 無向グラフの場合は次も実施
		G[B].push_back(A);
	}
    
    int max_num=0;
    int max_number=0;
    for(int i=0;i<N;i++){
         if(G[i].size()>max_num){
            max_num=G[i].size();
            max_number=i;
         }
    }

    cout<<max_number+1<<endl;
}