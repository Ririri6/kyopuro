#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  string S;
  cin>>S;

  vector<long long> R(N+1);//東を向く人の数
  vector<long long> L(N+1);//西を向く人の数
  R[0]=0;
  L[0]=0;
  int r=0;
  int l=0;
  for(int i=0;i<N;i++){
       if(S[i]=='W'){
          r++;
       }else if(S[i]=='E'){
        l++;
       }
       R[i+1]=r;
       L[i+1]=l;
  }
  
  long long min=N;

  for(int i=0;i<N;i++){
     long long result=R[i]+L[N]-L[i+1];
     if(min>result){
        min=result;
     }
  }

  cout<<min<<endl;

}
