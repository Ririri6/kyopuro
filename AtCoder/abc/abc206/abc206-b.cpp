#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  long long ans=0;
  long long sum=0;

  for(int i=1;i<=N;i++){
     sum+=i;
     ans++;
     if(sum>=N){
        cout<<ans<<endl;
        break;
     }
  }
}
