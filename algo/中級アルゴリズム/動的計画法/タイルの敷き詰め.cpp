#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;

   vector<long long> dp(N+1,0);
   dp[1]=1;
   dp[2]=2;
   if(N>=3){
      dp[3]=4;
   
   if(N>=4){
    for(int i=4;i<=N;i++){
      dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
   }
   
  }

   cout<<dp[N]<<endl;
}