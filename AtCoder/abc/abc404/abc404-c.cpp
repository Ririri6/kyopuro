#include <bits/stdc++.h>
using namespace std;

// グラフを表すデータ構造
using Graph = vector<vector<int>>;

int main() {
	// 入力
	int N, M;
	cin >> N >> M;
	Graph G(M);
	for (int i = 0; i < M; i++) {
		int A, B;
		cin >> A >> B;
		// 頂点 A から頂点 B への辺を張る
		G[A].push_back(B);
		
		// 無向グラフの場合は次も実施
		G[B].push_back(A);
	}

    int flag=0;
    for(int i=0;i<N;i++){
        if(G[i+1].size()==2){
            for(auto g:G[i+1]){
               if(i==0){
                if(g!=N){
                   flag=1;
                }
               }else if(i==N-1){
                if(g!=1){
                    flag=1;
                }
               }else{
                if(g!=i+2){
                    flag=1;
                }
               }
            }
        }
        
    }

    if(flag==0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }

    
}