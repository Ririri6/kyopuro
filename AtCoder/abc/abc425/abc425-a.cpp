#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;

   long long ans=0;
   for(int i=1;i<=N;i++){
    int a=1;
    for(int j=0;j<i;j++){
        a*=-1;
    }
    ans+=(a*i*i*i);
   }
   cout<<ans<<endl;
}