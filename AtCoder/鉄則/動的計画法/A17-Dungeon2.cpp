#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<int> A(N,0);
  vector<int> B(N,0);
  for(int i=1;i<N;i++){
    cin>>A[i];
  }
  for(int i=2;i<N;i++){
    cin>>B[i];
  }

  vector<int> dp(N);
  dp[0]=0;
  dp[1]=A[1];
  for(int i=2;i<N;i++){
    dp[i]=min(dp[i-1]+A[i],dp[i-2]+B[i]);
  }

  vector<int> K;
  int P=N-1;
  while(true){
    K.push_back(P+1);
    if(P==0){
        break;
    }
    if(dp[P]==dp[P-1]+A[P]){
        P=P-1;
    }else{
        P=P-2;
    }
  }


  sort(K.begin(),K.end());
  cout<<K.size()<<endl;
  for(auto k:K){
    cout<<k<<" ";
  }
  cout<<endl;
}
