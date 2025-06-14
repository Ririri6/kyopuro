#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  int K;
  cin>>K;

  int ans=0;
  for(int i=0;i<N;i++){
    if(K<=A[i]){
        ans++;
    }
  }

  cout<<ans<<endl;
}
