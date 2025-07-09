#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  long long D;
  cin>>D;

  vector<long long> L(D);
  vector<long long> R(D);
  for(int i=0;i<D;i++){
    cin>>L[i]>>R[i];
  }

  vector<int> P(N+1);
  vector<int> Q(N+1);
  P[1]=A[0];
  Q[N]=A[N-1];
  for(int i=1;i<N;i++){
    P[i+1]=max(P[i],A[i]);
  }

  for(int i=N-1;i>0;i--){
    Q[i]=max(Q[i+1],A[i]);
  }
  
  
  for(int i=0;i<D;i++){
    cout<<max(P[L[i]-1],Q[R[i]])<<endl;
  }
  

}
