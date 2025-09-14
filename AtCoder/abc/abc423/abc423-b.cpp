#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;
   vector<int> L(N);
   for(int i=0;i<N;i++){
    cin>>L[i];
   }
   map<int,int> M;
   for(int i=0;i<=N;i++){
    M[i]=0;
   }
   M[N]=1;
   M[0]=1;
   for(int i=0;i<N;i++){
    if(L[i]==0){
        M[i+1]=1;
    }else{
        break;
    }
   }
   for(int i=N-1;i>=0;i--){
    if(L[i]==0){
        M[i]=1;
    }else{
        break;
    }
   }

   long long ans=0;
   for(auto m:M){
    if(m.second==0){
        ans++;
    }
   }

   cout<<ans<<endl;
}