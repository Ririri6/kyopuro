#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long R_t,C_t,R_a,C_a;
   cin>>R_t>>C_t>>R_a>>C_a;

   long long N,M,L;
   cin>>N>>M>>L;

   vector<char> S(M);
   vector<long long> A(M);
   for(int i=0;i<M;i++){
    cin>>S[i]>>A[i];
   }

   vector<char> T(L);
   vector<long long> B(L);
   for(int i=0;i<L;i++){
    cin>>T[i]>>B[i];
   }
   
   long long num=0;
   string takahashi="";
   string aoki="";
   for(int i=0;i<M;i++){
       takahashi+=string(A[i],S[i]);
       if(takahashi.size()>=N){
        long long l=takahashi.length();
        for(int j=N;j<l;j++){
            takahashi.pop_back();
        }
        break;
       }
   }
    for(int i=0;i<M;i++){
       aoki+=string(B[i],T[i]);
       if(aoki.size()>=N){
        long long r=aoki.length();
        for(int j=N;j<r;j++){
            aoki.pop_back();
        }
        break;
       }
   }

   long long ans=0;
   for(int i=0;i<N;i++){
       if(takahashi[i]=='U'){
        C_t++;
       }
       if(takahashi[i]=='D'){
        C_t--;
       }
       if(takahashi[i]=='L'){
        R_t--;
       }
       if(aoki[i]=='R'){
        R_t++;
       }
       if(aoki[i]=='U'){
        C_a++;
       }
       if(aoki[i]=='D'){
        C_a--;
       }
       if(aoki[i]=='L'){
        R_a--;
       }
       if(aoki[i]=='R'){
        R_a++;
       }

       if(R_t==R_a && C_t==C_a){
        ans++;
       }
   }

   cout<<ans<<endl;
}