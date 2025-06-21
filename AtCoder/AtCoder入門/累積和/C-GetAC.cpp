#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,Q;
  cin>>N>>Q;
  string S;
  cin>>S;

  vector<long long> l(Q);
  vector<long long> r(Q);

  vector<string> sum(N+1);
  
  sum[0]="";
  for(int i=1;i<=N;i++){
    sum[i]=sum[i-1]+S[i];
  }

  for(int i=0;i<Q;i++){
    string T="";
    T+=sum[r[i]];
    T-=sum[l[i]-1];
    
  }
  
  
}
