#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> a(N);
  for(int i=0;i<N;i++){
    cin>>a[i];
  }

  map<long long,long long> M;
  for(int i=0;i<N;i++){
    M[a[i]]++;
  }

  long long ans=0;
  for(auto m:M){
    if(m.second>m.first){
        ans+=(m.second-m.first);
    }else if(m.second<m.first){
        ans+=m.second;
    }
  }

  cout<<ans<<endl;
}
