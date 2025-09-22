#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,m,M,T;
   cin>>N>>m>>M>>T;
   vector<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }
   vector<long long> S(N+1);
   S[0]=0;
   for(int i=0;i<N;i++){
    S[i+1]=S[i]+A[i];
   }
   long long ans=0;
   for(int i=1;i<=N;i++){
    long long sum=0;
    for(int j=m;j<=M;j++){
        if(i+j-1>N){
            break;
        }
       sum=S[i+j-1]-S[i-1];
       if(sum>=T*j){
        ans++;
       }
    }
    
   }
   cout<<ans<<endl;
}