#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin>>N>>K;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  vector<long long> P(N/2+1);
  P[0]=0;
  for(int i=0;i<N/2;i++){
    P[i+1]=P[i]+A[i];
  }

  vector<long long> Q(N/2+1);
  Q[0]=0;
  for(int i=N/2;i<N;i++){
    Q[i+1]=Q[i]+A[i];
  }

  vector<long long> SUM_1;
  for(int i=0;i<N/2;i++){
    SUM_1.push_back(Q[i])
  }


}
