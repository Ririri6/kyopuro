#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,Q;
  cin>>N>>Q;

  vector<long long> x(Q);
  for(int i=0;i<Q;i++){
    cin>>x[i];
  }

  map<long long,long long> A(N);
  for(int i=0;i<N;i++){
    A[i+1]=i;
  }

  for(int i=0;i<Q;i++){
    if(A[x[i]]==N-1){
        A[x[i]]=0;
        
    }else{
        
    }

    
  }
  
}

  

