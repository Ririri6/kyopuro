#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin>>N>>K;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  vector<long long> S(N+1);
  S[0]=0;
  for(int i=0;i<N;i++){
    S[i+1]=S[i]+A[i];
  }



  vector<long long> R(N-1);

  for(int i=1;i<=N;i++){
    if(i==1){
        R[i]=1;
    }else{
        R[i]=R[i-1];
    }

    while(true){
        if(i==0){

        }
        if(R[i]<N && S[R[i]+1]-S[i-1]<=K){
            R[i]++;
        }else{
            break;
        }
    }
  }

  long long ans=0;

  for(int i=1;i<=N;i++){
   ans+=(R[i]-i+1);
  }

  cout<<ans<<endl;
}
