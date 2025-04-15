#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<int> A(N);
  for(long long i=0;i<N;i++){
    cin>>A[i];
  }
  
  sort(A.begin(),A.end());

  long long ans=A[N-1]-A[0];

  cout<<ans<<endl;

}
