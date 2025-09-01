#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;

   long long ans=0;
   for(int i=1;i<=N-1;i++){
    ans+=i;
   }

   cout<<ans<<endl;
}