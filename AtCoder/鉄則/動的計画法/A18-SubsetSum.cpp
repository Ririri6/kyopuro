#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,S;
  cin>>N>>S;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  vector<vector<int>> dp(N+1, vector<int>(S+1, 0));
  dp[0][0]=1;
  for(int i=1;i<=N;i++){
    for(int j=0;j<=S;j++){
        if(j<A[i-1]){
            if(dp[i-1][j]==1){
                dp[i][j]=1;
            }
        }
        if(j>=A[i-1]){
           if(dp[i-1][j]==1 || dp[i-1][j-A[i-1]]==1){
            dp[i][j]=1;
        }
        }
        
    }
  }
  if(dp[N][S]==1){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}
