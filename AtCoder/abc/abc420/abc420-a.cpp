#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int X,Y;
   cin>>X>>Y;

   int ans=X+Y;
   if(ans<=12){
    cout<<ans<<endl;
   }else if(ans%12==0){
    cout<<12<<endl;
   }else{
    cout<<ans%12<<endl;

   }
}