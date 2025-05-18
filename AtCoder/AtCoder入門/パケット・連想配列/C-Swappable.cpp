#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;
  
  map<long long,long long> A;
  for(int i=0;i<N;i++){
    long long a;
    cin>>a;

    A[a]++;
  }
  
  
  long long ans=N*(N-1)/2;
  for(auto m:A){
    if(m.second!=1){
        long long num=m.second;
        ans-=num*(num-1)/2;
    }
  }

  cout<<ans<<endl;
}
