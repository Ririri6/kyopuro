#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  long long Q;
  cin>>Q;

  vector<long long> l(Q);
  vector<long long> r(Q);
  for(int i=0;i<Q;i++){
    cin>>l[i]>>r[i];
  }

  vector<long long> S(N);
  long long sum=0;

  for(int i=0;i<N;i++){
     sum+=A[i];
     S[i]=sum;
  }

  for(int i=0;i<Q;i++){
    if(l[i]==0){
        cout<<S[r[i]-1]<<endl;
    }else{
        cout<<S[r[i]-1]-S[l[i]-1]<<endl;
    }
    
  }
}
