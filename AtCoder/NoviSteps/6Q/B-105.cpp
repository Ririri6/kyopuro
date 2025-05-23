#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  int ans=0;

  for(int n=1;n<=N;n+=2){
    int num=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            num++;
        }
    }
    if(num==8){
        ans++;
    }
  }

  cout<<ans<<endl;
}
