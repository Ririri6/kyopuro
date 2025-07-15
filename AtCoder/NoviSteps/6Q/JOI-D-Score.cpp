#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  int M;
  cin>>M;

  vector<int> B(M);
  for(int i=0;i<M;i++){
    cin>>B[i];
  }

  map<int,int> S;
  for(int i=0;i<M;i++){
    S[B[i]]=1;
  }
  
  int score=0;
  for(int i=0;i<N;i++){
    score+=A[i];
    S[score]++;
    if(S[score]!=1){
        score=0;
    }else{
        S[score]=0;
    }
  }

  cout<<score<<endl;
}
