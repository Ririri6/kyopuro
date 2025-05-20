#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int X;
  cin>>X;

  int max=1;
  for(int i=1;i<=X;i++){
    for(int j=2;j<=X;j++){
        int num=pow(i,j);
        if(num>max && num<=X){
            max=num;
        }
    }
  }

  cout<<max<<endl;
}
