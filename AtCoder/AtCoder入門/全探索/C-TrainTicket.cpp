#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string n;
  cin>>n;
  char A,B,C,D;

  A=n[0];
  B=n[1];
  C=n[2];
  D=n[3];
  
  int a,b,c,d;
  a=A-'0';
  b=B-'0';
  c=C-'0';
  d=D-'0';

  if(a+b+c+d==7){
    cout<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"="<<7<<endl;
    return 0;
  }
  if(a-b-c-d==7){
    cout<<a<<"-"<<b<<"-"<<c<<"-"<<d<<"="<<7<<endl;
    return 0;
  }
  if(a-b+c+d==7){
    cout<<a<<"-"<<b<<"+"<<c<<"+"<<d<<"="<<7<<endl;
    return 0;
  }
  if(a+b-c+d==7){
    cout<<a<<"+"<<b<<"-"<<c<<"+"<<d<<"="<<7<<endl;
    return 0;
  }
  if(a+b+c-d==7){
    cout<<a<<"+"<<b<<"+"<<c<<"-"<<d<<"="<<7<<endl;
    return 0;
  }
   if(a-b-c+d==7){
    cout<<a<<"-"<<b<<"-"<<c<<"+"<<d<<"="<<7<<endl;
    return 0;
  }
   if(a-b+c-d==7){
    cout<<a<<"-"<<b<<"+"<<c<<"-"<<d<<"="<<7<<endl;
    return 0;
  }
  if(a+b-c-d==7){
    cout<<a<<"+"<<b<<"-"<<c<<"-"<<d<<"="<<7<<endl;
    return 0;
  }

}
