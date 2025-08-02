#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;
  vector<long long> P(N);
  vector<long long> A(N);
  vector<long long> B(N);
  for(int i=0;i<N;i++){
    cin>>P[i]>>A[i]>>B[i];
  }

  long long Q;
  cin>>Q;
  vector<long long> X(Q);
  for(int i=0;i<Q;i++){
    cin>>X[i];
  }

  for(int i=0;i<Q;i++){
    for(int j=0;j<N;j++){
        if(P[j]>=X[i]){
            X[i]+=A[j];
        }else{
            X[i]=max(0LL,X[i]-B[j]);
        }
    }
    cout<<X[i]<<endl;
  }


}
