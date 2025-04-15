#include <bits/stdc++.h>
using namespace std;

// グラフを表すデータ構造
using Graph = vector<vector<int>>;

int main() {
	// 入力
	int N, M,X;
	cin >> N >> M>>X;
	Graph G(N);
	for (int i = 0; i < M; ++i) {
		int A, B;
		cin >> A >> B;

		// 頂点 A から頂点 B への辺を張る
		G[A].push_back(B);
		
		// 無向グラフの場合は次も実施
		G[B].push_back(A);
	}
    
    //Xの友達を入れる配列
    vector<int> vec;
    for(auto g : G[X]){
        vec.push_back(g);
    }

    //Xの友達の友達を入れる配列
    set<int> f;

    for(int i=0;i<vec.size();i++){
        for(auto g :G[vec[i]]){
            if(g!=X){
                f.insert(g);
            }
        }
    }

    int num=0;

    for(auto fp: f){
        for(int j=0;j<vec.size();j++){
            if(fp==vec[j]){
               num++;
            }
        }
    }

    int result=f.size()-num;
    cout<<result<<endl;


}