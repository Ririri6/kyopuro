#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long x;
  cin>>x;
  
  long long ans=x/11;
  long long b=x%11;
  ans=ans*2;
  if(b==0){
    cout<<ans<<endl;
    return 0;
  }else {
    b-=6;
    ans++;
    if(b>0){
        b-=5;
        ans++;
    }
  }
  cout<<ans<<endl;
}
