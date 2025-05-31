#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long H;
  cin>>H;

  int ans=0;
  int h=0;
  while(true){
    h+=pow(2,ans);
    //cout<<h<<endl;
     if(H<h){
        cout<<ans+1<<endl;
        return 0;
     }
     ans++;
  }
}
