#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;

  vector<long long> A(M);
  for(int i=0;i<M;i++){
    cin>>A[i];
  }

  vector<vector<long long>> X(N, vector<long long>(M));
  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
        cin>>X[i][j];
    }
  }

  map<long long,long long> F;
  for(int i=1;i<=M;i++){
    F[i]=0;
  }

  for(int i=0;i<N;i++){
    for(int j=0;j<M;j++){
        F[j+1]+=X[i][j];
    }
  }

  for(auto f:F){
    if(f.second<A[f.first-1]){
        cout<<"No"<<endl;
        return 0;
    }
  }
  cout<<"Yes"<<endl;
}
