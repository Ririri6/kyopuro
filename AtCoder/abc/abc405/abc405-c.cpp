#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  
  long long sum=0;

  for(int i=0;i<N;i++){
    sum+=A[i];
  }

  long long ans=0;
  for(int i=0;i<N;i++){
    sum-=A[i];
    ans+=A[i]*sum;
  }

  cout<<ans<<endl;

}
