#include <bits/stdc++.h>
using namespace std;

// グラフを表すデータ構造
using Graph = vector<vector<long long>>;

int main() {
	long long N;
	cin>>N;

	vector<long long> A(N-1);
    Graph G(N);
	for(int i=0;i<N-1;i++){
		cin>>A[i];

		G[A[i]-1].push_back(i+2);
	}
    
	for(int i=0;i<N;i++){
		cout<<G[i].size()<<endl;
	}
	
    
}