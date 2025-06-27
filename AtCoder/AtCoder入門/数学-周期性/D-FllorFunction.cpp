#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long A,B,N;
  cin>>A>>B>>N;

  long long ans=0;
  
  if(N<B){
     ans=(A*N)/B-A*(N/B);
  }else{
    ans=(A*(B-1)/B)-A*((B-1)/B);
  }

  cout<<ans<<endl;
  

}
