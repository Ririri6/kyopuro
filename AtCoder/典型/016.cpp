#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;

   long long A,B,C;
   cin>>A>>B>>C;

   long long ans=9999;

   for(int a=0;a<=9999;a++){
    for(int b=0;b<=9999;b++){
        long long nokori=N-A*a-B*b;
        if(nokori%C==0){
            long long c=nokori/C;
            if(c>=0 && c<=9999){
                ans=min(ans,a+b+c);
            }
        }
    }
   }
   cout<<ans<<endl;
}