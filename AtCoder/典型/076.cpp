#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;
   vector<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }

   vector<long long> S(N+1);
   S[0]=0;
   for(int i=0;i<N;i++){
    S[i+1]=S[i]+A[i];
   }

   for(int i=0;i<=N;i++){
    for(int j=i;j<=N;j++){
        long long ans=S[j]-S[i];
        if(ans==S[N]/10 && S[N]%10==0){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
   }
 
    for(int j=0;j<=N;j++){
           long long ans=S[N]-S[N-j]+S[1];
           if(ans==S[N]/10 && S[N]%10==0){
              cout<<"Yes"<<endl;
              return 0;
            }
    }
   

   

   cout<<"No"<<endl;
}