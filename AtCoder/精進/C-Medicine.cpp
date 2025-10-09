#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,K;
   cin>>N>>K;

   vector<long long>a(N),b(N);
   long long sum=0;
   map<long long,long long> M;
   for(int i=0;i<N;i++){
    cin>>a[i]>>b[i];
    sum+=b[i];
    M[a[i]]+=b[i];
   }
   
   long long ans=0;
  
   for(auto m:M){
     if(sum<=K){
        cout<<ans+1<<endl;
        return 0;
     }else{
        sum-=m.second;
        ans=m.first;
     }
   }

   cout<<ans+1<<endl;

   
   

}