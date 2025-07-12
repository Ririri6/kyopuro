#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,L,R;
  cin>>N>>L>>R;

  vector<int> X(N);
  vector<int> Y(N);
  for(int i=0;i<N;i++){
    cin>>X[i]>>Y[i];
  }

  int ans=0;
  for(int i=0;i<N;i++){
    if(X[i]<=L && Y[i]>=R){
        ans++;
    }
  }

  cout<<ans<<endl;
}
