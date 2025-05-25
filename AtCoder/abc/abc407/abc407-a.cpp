#include <bits/stdc++.h>
using namespace std;
 
int main() {
  double A,B;
  cin>>A>>B;

  int min=407;

  for(int i=0;i<=407;i++){
    double n=A/B;
    if(abs(n-min)>abs(n-i)){
        min=i;
    }
  }

  cout<<min<<endl;
}
