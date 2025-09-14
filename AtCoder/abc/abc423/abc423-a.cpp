#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long X;
   int C;
   cin>>X>>C;
  
   long long ans=0;
   long long num=X;//残高
   while(true){
    ans++;
    num-=(1000+C);
    if(num<0){
        ans--;
        break;
    }
     
   }
   cout<<ans*1000<<endl;
}