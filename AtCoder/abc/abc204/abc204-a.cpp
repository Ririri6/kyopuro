#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x,y;
  cin>>x>>y;
  int ans;
  if(x==0){
    if(y==0){
        ans=0;
    }else if(y==1){
        ans=2;
    }else{
        ans=1;
    }
  }else if(x==1){
    if(y==0){
        ans=2;
    }else if(y==1){
        ans=1;
    }else{
        ans=0;
    }
  }else if(x==2){
    if(y==0){
        ans=1;
    }else if(y==1){
        ans=0;
    }else{
        ans=2;
    }
  }

  cout<<ans<<endl;
}
