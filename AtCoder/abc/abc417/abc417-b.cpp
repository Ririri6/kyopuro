#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  vector<long long> B(M);
  for(int i=0;i<M;i++){
    cin>>B[i];
  }

  for(int i=0;i<M;i++){
     if(A.size()==0){
       return 0;
     }
    for(int j=0;j<A.size();j++){
        if(B[i]==A[j]){
            A.erase(A.begin()+j);
            break;
        }
    }
  }
 
 
  for(int i=0;i<A.size();i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;
}
