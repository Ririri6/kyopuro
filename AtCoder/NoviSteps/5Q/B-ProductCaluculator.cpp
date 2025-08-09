#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,K;
  cin>>N>>K;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  long long y=1;
  for(int i=0;i<K;i++){
    y*=10;
  }
  y--;

  long long ans=1;

  for(int i=0;i<N;i++){
    if(A[i]>(y/ans)){
      ans=1;
    }else{
      ans=ans*A[i];
    }
  }  
   
  cout<<ans<<endl;
}
