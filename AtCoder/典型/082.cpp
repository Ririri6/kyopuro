#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long L,R;
   cin>>L>>R;

   long long ans=0;
   for(int i=L;i<=R;i++){
    long long num=to_string(i).length();
    ans+=(num*i);
    ans%=1000000007;
   }

   cout<<ans<<endl;
}

