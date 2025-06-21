#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> T(N);
  vector<int> V(N);
  for(int i=0;i<N;i++){
    cin>>T[i]>>V[i];
  }

  int ans=0;
  int t=T[0];
  for(int i=0;i<N;i++){

    ans-=(T[i]-t);
    if(ans<0){
        ans=0;
    }
    ans+=V[i];
     
     t=T[i];
  }

  cout<<ans<<endl;
}
