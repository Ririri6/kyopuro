#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> A(N);
  map<long long,long long> B;
  for(int i=0;i<N;i++){
    cin>>A[i];
    B[A[i]]+=1;
  }

  

  long long ans=0;
  //Aのすべての文字を区別
  ans+=((N*(N-1))/2);

  long long n=0;
  for(auto b :B){
    if(B[b]!=1){
        n+=B[b];
    }
  }
  
  long long num=N-n;
  ans-=num;
  

  cout<<ans<<endl;


}
