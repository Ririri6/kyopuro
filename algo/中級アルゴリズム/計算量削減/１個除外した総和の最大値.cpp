#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> A(N);

  for(long long i=0;i<N;i++){
     cin>>A[i];
  }

  sort(A.begin(),A.end());
  
  long long ans=0;
  for(long long i=1;i<N;i++){
     ans+=A[i];
  }

  cout<<ans<<endl;
}
