#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,R;
   cin>>N>>R;

   vector<int> L(N);
   for(int i=0;i<N;i++){
    cin>>L[i];
   }
   

   long long ans=0;
   long long num=0;
   vector<int> s(N+1);
   s[0]=0;
   for(int i=0;i<N;i++){
    s[i+1]=s[i]+A[i];
   }
   for(int i=R;i>=0;i--){
     if(L[i-1]==1){
        if(s[i-1]-s[i]<i){
            num+=(i-s[i-1]-s[i]);
        }
     }else{
        ans++;
     }
   }
   for(int i=R;i<N;i++){
    if(L[i]==1){
        ans+=2;
    }else{
        ans++;
    }
   }
   cout<<ans<<endl;

}