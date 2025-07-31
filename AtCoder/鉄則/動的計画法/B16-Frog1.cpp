#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<int> h(N);
  for(int i=0;i<N;i++){
    cin>>h[i];
  }
  
  vector<int> cost1(N,0);
  vector<int> cost2(N,0);
  for(int i=1;i<N;i++){
    cost1[i]=abs(h[i-1]-h[i]);
  }
  for(int i=2;i<N;i++){
    cost2[i]=abs(h[i-2]-h[i]);
  }
 
  vector<int> dp(N);
  dp[0]=0;
  dp[1]=cost1[1];
  for(int i=2;i<N;i++){
    dp[i]=min(dp[i-1]+cost1[i],dp[i-2]+cost2[i]);
  }
  
  
  cout<<dp[N-1]<<endl;
}
