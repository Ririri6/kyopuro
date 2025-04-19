#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,M;
  cin>>N>>M;

  vector<vector<int>> vec(M);

  long long K;
  for(int i=0;i<M;i++){
    cin>>K;
     vec[i].resize(K);
    for(int j=0;j<K;j++){
        cin>>vec[i][j];
    }

  }

  vector<int> B(N);
  for(int i=0;i<N;i++){
    cin>>B[i];
  }

  set<long long> set;

  for(int i=0;i<N;i++){
     for(int j=0;j<M;j++){
        for(int k=0;k<vec[j][0];k++){
            if(vec[j][k]==B[i]){
                vec[j].erase(vec[j].begin()+k);
            }
        }

        if(vec[j].size()==0){
            set.insert(j);
        }
     }

     cout<<set.size()<<endl;
  }

  
}
