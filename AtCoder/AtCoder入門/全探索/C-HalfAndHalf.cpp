#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A,B,C;
  long long X,Y;
  cin>>A>>B>>C>>X>>Y;

  
  long long m=1e9;

  for(int a=X;a>=0;a--){
    int c=2*X-2*a;
    int b = std::max(0, static_cast<int>(Y - c / 2));

     if((A*a+B*b+C*c)<m){
      m=A*a+B*b+C*c;
     }
  }
  
  for(int b=Y;b>=0;b--){
      int c=2*Y-2*b;
      int a = std::max(0, static_cast<int>(X - c / 2));
      if((A*a+B*b+C*c)<m){
        m=A*a+B*b+C*c;
      }
  }
  
  for(int c=max(X,Y)*2;c>=0;c--){
      int a,b;
      if(c/2>=X){
        a=0;
      }else{
        a=X-c/2;
      }

      if(c/2>=Y){
        b=0;
      }else{
        b=Y-c/2;
      }
      
      if((A*a+B*b+C*c)<m){
        m=A*a+B*b+C*c;
      }  
  }
  
  
  cout<<m<<endl;
}
