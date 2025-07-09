#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin>>N>>K;
  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  long long r=A[0]*K;
  long long l=0;
  long long c=(r+l)/2;
  long long num=0;
  while(r>l){
    for(int i=0;i<N;i++){
        num+=(c/A[i]);
    }
    if(num>=K){
       r=c;
       num=0;
    }else if(num<K){
        l=c+1;
        num=0;
    }
    c=(r+l)/2;
    
  }
  
  cout<<l<<endl;
}
