#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long X,Y;
   cin>>X>>Y;
   
   
   for(int i=0;i<8;i++){
       long long a_3=X+Y;
       string a=to_string(a_3);
       
       
       reverse(a.begin(),a.end());
       

       long long a_n=stoll(a);
       
       
       X=Y;
       Y=a_n;
       
   }

   
   cout<<Y<<endl;
}
