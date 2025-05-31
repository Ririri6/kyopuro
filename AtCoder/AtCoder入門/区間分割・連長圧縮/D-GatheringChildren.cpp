#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  long long N=S.length();

  vector<long long> M(N);
  vector<long long> T(N);
  for(int i=0;i<N;i++){
    M[i]=1;
    T[i]=1;
  }

  

  for(int i=0;i<4;i++){
    for(int j=0;j<N;j++){
        if(S[j]=='R' && j+1<N){
            M[j+1]+=T[j];
            M[j]-=T[j];
        }
        if(S[j]=='L' && j-1>=0){
            M[j-1]+=T[j];
            M[j]-=T[j];
        }
        
    }
    for(int k=0; k<N ; k++){
        T[k]=M[k];
        //cout<<M[k]<<" ";
    }
    //cout<<endl;
  }

  for(int i=0;i<N;i++){
    cout<<M[i]<<" ";
  }

  cout<<endl;

  


}
