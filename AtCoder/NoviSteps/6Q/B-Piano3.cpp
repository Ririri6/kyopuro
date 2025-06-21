#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(N);
  vector<char> S(N);
  for(int i=0;i<N;i++){
    cin>>A[i]>>S[i];
  }

  int ans=0;
  int pR=0;
  int pL=0;
  if(S[0]=='L'){
        pL=A[0];
  }else if(S[0]=='R'){
        pR=A[0];
  }
  for(int i=1;i<N;i++){
     if(S[i]=='L'){
        if(pL!=0){
            ans+=abs(pL-A[i]);
        }
        pL=A[i];
        
     }else if(S[i]=='R'){
        if(pR!=0){
            ans+=abs(pR-A[i]);
        }
        pR=A[i];
     }
     
  }
  cout<<ans<<endl;
}
