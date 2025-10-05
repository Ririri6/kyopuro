#include <bits/stdc++.h>
using namespace std;
 
int main() {
   string X,Y;
   cin>>X>>Y;

   if(Y=="Ocelot" && (X=="Serval" || X=="Lynx"|| X=="Ocelot")){
    cout<<"Yes"<<endl;
   }else if(Y=="Serval" && (X=="Serval" || X=="Lynx")){
    cout<<"Yes"<<endl;
   }else if(Y=="Lynx" && X=="Lynx"){
    cout<<"Yes"<<endl;
   }
   else{
    cout<<"No"<<endl;
   }
}