#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,S;
  cin>>N>>S;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  sort(A.begin(),A.end());
  map<long long,long long> M;

  long long ans=0;
  for(int i=0;i<N;i++){
    long long k=S-A[i];
    if(M.count(k)){
      ans+=M[k];
    }

    M[A[i]]++;
  }

  
    
  cout<<ans<<endl;
}
