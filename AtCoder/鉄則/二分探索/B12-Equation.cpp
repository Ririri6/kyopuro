#include <bits/stdc++.h>
using namespace std;
 
int main() {
  double N;
  cin>>N;

  double r=100;
  double l=0;
  double c=(r+l)/2;
 
  int i=0;
  while(i<20){
    double a=c*c*c+c;
    if(a>=N){
        r=c;
    }else{
        l=c;
    }
    c=(r+l)/2;
    i++;
  }

  cout<<fixed<<setprecision(6)<<c<<endl;
}
