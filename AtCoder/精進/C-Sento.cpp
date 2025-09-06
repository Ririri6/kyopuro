#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,T;
   cin>>N>>T;
   vector<long long> t(N);
   for(int i=0;i<N;i++){
    cin>>t[i];
   }

   long long ans=0;
   long long end_t=0;
   for(int i=0;i<N;i++){
    if(t[i]>=end_t){
        ans+=T;
    }else{
        ans+=(t[i]+T-end_t);
    }
    end_t=t[i]+T;
   }

   cout<<ans<<endl;
}
