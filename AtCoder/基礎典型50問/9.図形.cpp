#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> x(3);
  vector<int> y(3);

  for(int i=0;i<3;i++){
    cin>>x[i]>>y[i];
  }

  int a,b;
  
  if(x[0]==x[1]){
    a=x[2];
  }else if(x[1]==x[2]){
    a=x[0];
  }else if(x[2]==x[0]){
    a=x[1];
  }

  if(y[0]==y[1]){
    b=y[2];
  }else if(y[1]==y[2]){
    b=y[0];
  }else if(y[2]==y[0]){
    b=y[1];
  }

  cout<<a<<" "<<b<<endl;
}
