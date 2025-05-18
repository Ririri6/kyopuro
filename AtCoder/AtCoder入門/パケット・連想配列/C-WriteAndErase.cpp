#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  map<long long,long long> M;
  for(int i=0;i<N;i++){
    M[A[i]]++;
  }

  long long ans=0;
  for(auto m:M){
    if(m.second%2==1){
        ans++;
    }
  }

  cout<<ans<<endl;
}
