#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,K;
  cin>>N>>K;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  int kuseki=K;
  int ans=0;
  for(int i=0;i<N;i++){
    if(A[i]>kuseki){
        ans++;
        kuseki=K;
        kuseki-=A[i];
    }else{
        kuseki-=A[i];
    }

     if(i==N-1){
           ans++;
        }
  }
  
  cout<<ans<<endl;
}
