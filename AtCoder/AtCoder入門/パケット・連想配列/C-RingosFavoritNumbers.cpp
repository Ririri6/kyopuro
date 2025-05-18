#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  map<int,int> M;
  for(int i=0;i<N;i++){
    M[A[i]%200]++;
  }
  long long ans=0;

  for(auto m:M){
    long long n=m.second;
    ans+=n*(n-1)/2;
  }

  cout<<ans<<endl;
}
