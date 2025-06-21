#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,M,T;
  cin>>N>>M>>T;

  vector<long long> A(M);
  vector<long long> B(M);
  for(int i=0;i<M;i++){
    cin>>A[i]>>B[i];
  }
  
  int flag=0;
  double b=N-A[0];
  if(b<=0){
    flag=1;
  }
  for(int i=0;i<M;i++){
      b+=(B[i]-A[i]);
      if(b>N){
        b=N;
      }
      if(i!=M-1){
        b-=(A[i+1]-B[i]);
        if(b<=0){
          flag=1;
          b=0;
        }
      }
     
  }
  b-=(T-B[M-1]);
  if(b<=0){
    b=0;
    flag=1;
  }
  
  if(flag==1){
     cout<<"No"<<endl;
  }else{
    cout<<"Yes"<<endl;
  }
}
