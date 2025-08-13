#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,M;
  cin>>N>>M;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  vector<long long> B(M);
  long long B_max=0;
  for(int i=0;i<M;i++){
    cin>>B[i];
    if(B_max<B[i]){
      B_max=B[i];
    }
  }

  long long r=B_max;
  vector<long long> id(200000,-1);
  for(int i=0;i<N;i++){
    if(A[i]<=r){
      for(int j=A[i];j<=r;j++){
        id[j]=i+1;
      }
      r=A[i]-1;
    }
  }


  for(int i=0;i<M;i++){
    cout<<id[B[i]]<<endl;
  }

}
