#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long A,B;
   cin>>A>>B;
   
   long long INF=1e18;
   long long g=gcd(A,B);
   
   if(A/g > INF/B){
     cout<<"Large"<<endl;
     return 0;
   }else{
    cout<<(A/g)*B<<endl;
   }

}