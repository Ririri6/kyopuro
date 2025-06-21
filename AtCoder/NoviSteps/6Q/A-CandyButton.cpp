#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,C;
  cin>>N>>C;

  vector<int> T(N);
  for(int i=0;i<N;i++){
    cin>>T[i];
  }

  int ans=1;
  int t=T[0];
  for(int i=1;i<N;i++){
    if(T[i]-t>=C){
        ans++;
        t=T[i];
    }
  }

  cout<<ans<<endl;
}
