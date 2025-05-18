#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin>>N>>K;
  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  
  map<long long ,long long>B;
  for(int i=0;i<N;i++){
    B[A[i]]++;
  }

  vector<pair<long long ,long long>>C;
  for(auto m:B){
    C.push_back({m.second,m.first});
  }

  sort(C.begin(),C.end());
  long long ans=0;
  if(C.size()>K){
    long long num=C.size()-K;
    long long n=0;
    
    for(auto c: C){
        ans+=c.first;
        n++;
        if(n==num){
            cout<<ans<<endl;
            return 0;
        }
    }
    
    
  }else{
    cout<<0<<endl;
  }

}
