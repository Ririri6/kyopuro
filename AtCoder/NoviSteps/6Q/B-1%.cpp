#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long X;
  cin>>X;

  long long sum=100;
  long long ans=0;
  while(true){
    sum=sum+sum/100;
    //cout<<sum<<endl;
    ans++;
    if(sum>=X){
        cout<<ans<<endl;
        return 0;
    }
  }
}
