#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long A,B,C;
   cin>>A>>B>>C;
   
   long long ans=0;
   if(A==B==C){
    cout<<1<<endl;
    return 0;
   }else{
     long long tmp;
     if(A>B){
         tmp=A;
         A=B;
         B=tmp;
     }
     if(B>C){
        tmp=B;
        B=C;
        C=tmp;
     }
     //A<=B<=Cになってる
     if(gcd(A,B)==1 || gcd(B,C)==1 || gcd(C,A)==1){
        ans+=(A-1);
        ans+=(B-1);
        ans+=(C-1);
     }else{
        long long num=gcd(A,gcd(B,C));
        ans+=(A/num-1);
        ans+=(B/num-1);
        ans+=(C/num-1);
     }
   }
   cout<<ans<<endl;
}