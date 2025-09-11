#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,K;
   cin>>N>>K;

   long long ans=0;
   //N=3以上ならKは少なくとも３色必要
   if(N==1){
    cout<<K<<endl;
   }else if(N==2){
    if(K==1){
        cout<<0<<endl;
        return 0;
    }else{
        cout<<K*(K-1)<<endl;
        return 0;
    }
   }else{
       if(K<3){
        cout<<0<<endl;
        return 0;
       }else{
          ans=K*(K-1);
          for(int i=0;i<N-2;i++){
            ans*=(K-2);
            ans%=1000000007;
          }
          cout<<ans%1000000007<<endl;
          return 0;
       }
   }
}