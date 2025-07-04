#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin>>N>>K;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  
  if(N<=K){
    cout<<1<<endl;
    return 0;
  }else{
    long long ans = (N - 1 + K - 2) / (K - 1);
    cout<<ans<<endl;
    return 0;
  }
  
}
