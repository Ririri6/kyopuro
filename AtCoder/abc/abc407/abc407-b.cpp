#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int X,Y;
  cin>>X>>Y;

  double num=0;

  for(int a=1;a<=6;a++){
    for(int b=1;b<=6;b++){
        if((a+b)>=X || abs(a-b)>=Y){
            num++;
        }
    }
  }

  cout<<fixed << setprecision(20) <<num/36.0<<endl;
}
