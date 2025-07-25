#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  vector<long long> B(M);
  for(int i=0;i<M;i++){
    cin>>B[i];
  }

  map<long long ,long long> P;
  for(int i=0;i<N;i++){
    P[A[i]]+=1;
  }

  for(int i=0;i<M;i++){
    if(P.count(B[i])==0 || P[B[i]]==0){
        cout<<"No"<<endl;
        return 0;
    }else{
        P[B[i]]--;

    }
    
  }
  cout<<"Yes"<<endl;
}
