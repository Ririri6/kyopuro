#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  long long wa=0;

  vector<long long> W(N);
  for(int i=0;i<N;i++){
     wa+=A[i];
     W[i]=wa;
  }

  long long ans=0;
  for(int i=0;i<N;i++){
    ans+=(A[i]*(wa-W[i]));
  }

  cout<<ans<<endl;
}
