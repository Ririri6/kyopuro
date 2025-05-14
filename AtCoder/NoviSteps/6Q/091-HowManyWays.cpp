#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,X;
  cin>>N>>X;

  int ans=0;
  for(int a=1;a<=N;a++){
    for(int b=a+1;b<=N;b++){
        int c=X-b-a;
        if(c<=N && c>b){
            ans++;
        }
    }
  }

  cout<<ans<<endl;
}
