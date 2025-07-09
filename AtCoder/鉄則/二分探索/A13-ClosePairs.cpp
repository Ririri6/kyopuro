#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin>>N>>K;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  //尺取り法
  vector<long long> R(N);
  
  for(int i=0;i<N-1;i++){
    if(i==0){
        R[i]=0;
    }else{
        R[i]=R[i-1];

    }
    while(true){
        if(R[i]<N-1 && A[R[i]+1]-A[i]<=K){
            R[i]++;
        }else{
            break;
        }
      
    }
  }
  
  long long ans=0;
  for(int i=0;i<N-1;i++){
    ans+=(R[i]-i);
  }
  
  cout<<ans<<endl;

}
