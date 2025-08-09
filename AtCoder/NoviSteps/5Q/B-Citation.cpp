#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  sort(A.begin(),A.end());
  long long num=A[N-1];

  map<long long,long long> M;
  for(int i=0;i<=num;i++){
    M[i]=0;
  }

  for(int i=0;i<N;i++){
    for(int j=0;j<=num;j++){
        if(j<=A[i]){
            M[j]++;
        }
    }
  }

  long long ans=0;

  for(auto m:M){
    if(m.second>=m.first){
        if(ans<m.first){
            ans=m.first;
        }
    }
  }

  cout<<ans<<endl;



}
