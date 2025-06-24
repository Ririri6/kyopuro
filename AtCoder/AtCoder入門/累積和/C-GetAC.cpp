#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,Q;
  cin>>N>>Q;
  string S;
  cin>>S;

  vector<long long> l(Q);
  vector<long long> r(Q);
  for(int i=0;i<Q;i++){
    cin>>l[i]>>r[i];
  }

  vector<long long> sum(N+1);
  
  sum[0]=0;
  long long count=0;
  for(int i=0;i<N;i++){
    if(S[i]=='A' && S[i+1]=='C'){
      count++;
    }
    //cout<<count<<endl;
    sum[i+1]=count;
  }

  for(int i=0;i<Q;i++){
    cout<<sum[r[i]-1]-sum[l[i]-1]<<endl;
  }
    
}
