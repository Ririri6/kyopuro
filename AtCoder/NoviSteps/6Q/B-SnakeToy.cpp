#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,K;
  cin>>N>>K;
  vector<int> l(N);
  for(int i=0;i<N;i++){
    cin>>l[i];
  }

  sort(l.begin(),l.end());
  int ans=0;
  for(int i=0;i<K;i++){
    ans+=l[N-1-i];
  }

  cout<<ans<<endl;
}
