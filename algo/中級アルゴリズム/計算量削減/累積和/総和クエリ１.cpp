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
  
  vector<long long> k(Q);
  for(int i=0;i<Q;i++){
    cin>>k[i];
  }
 

  vector<long long> S(N);
  long long sum=0;
  for(int i=0;i<N;i++){
    sum+=A[i];
    S[i]=sum;
  }

  for(int i=0;i<Q;i++){
    if(k[i]==0){
        cout<<0<<endl;
    }else{
        cout<<S[k[i]-1]<<endl;
    }
    
  }
}
