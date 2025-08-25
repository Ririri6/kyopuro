#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long double PI = 3.14159265358979;
   long double T;
   cin>>T;

   long double L,X,Y;
   cin>>L>>X>>Y;
   int Q;
   cin>>Q;

   for(int i=0;i<Q;i++){
      long long E;
      cin>>E;

      double theata=E/T*2.0*PI;
      
      double y=-L/2.0*sin(theata);
      double z=L/2.0-(L/2.0)*cos(theata);
      double b=sqrt(X*X+(Y-y)*(Y-y));

      double ans=atan2(z,b)/PI*180.0;
      
      cout<<fixed<<setprecision(15)<<ans<<endl;
   }

   
}