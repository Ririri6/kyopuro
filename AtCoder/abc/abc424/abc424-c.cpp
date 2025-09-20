#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;

   vector<long long> A(N);
   vector<long long> B(N);
   for(int i=0;i<N;i++){
    cin>>A[i]>>B[i];
   }

   long long ans=0;
   vector<long long> S(N);
   for(int i=0;i<N;i++){
    S[i]=0;
   }
   for(int i=0;i<N;i++){
     if(A[i]==0 && B[i]==0){
        S[i]=1;
     }else if(S[A[i]-1]==1 && S[B[i]-1]==0){
        S[B[i]-1]=1;
     }else if(S[A[i]-1]==0 && S[B[i]-1]==1){
        S[A[i]-1]=1;
     }
   }

   for(int i=0;i<N;i++){
    if(S[i]==1){
        ans++;
    }
   }
   cout<<ans<<endl;
}