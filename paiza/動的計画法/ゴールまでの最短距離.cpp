#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;

   vector<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }
   vector<long long> dp(N);
   map<long long,long long> M;
   dp[0]=0;
   M[A[0]]=dp[0];
   for(int i=1;i<N;i++){
    if(!M.count(A[i])){
        M[A[i]]=i;
    }
    
    dp[i]=min(dp[i-1]+1,M[A[i]]+1);
    M[A[i]]=min(M[A[i]],dp[i]);
    
   }
   cout<<dp[N-1]<<endl;
}