#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin>>N>>K;

  vector<long long> A(N+1);
  long long num = 1000000000;

  for(long long i=0;i<=N;i++){
    if(i<K){
        A[i]=1;
    }
    else if(i>K){
        A[i]=(2*A[i-1]%num-A[i-K-1]%num + num)%num; 
    }
    else if(i==K){
        A[i]=K;
        
    }

}

long long ans=A[N]%num;
  cout<<ans<<endl;

}
