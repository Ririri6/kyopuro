#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  map<long long,long long> A;
  int num;
  for(int i=0;i<N;i++){
    cin>>num;
    A[num]++;
  }

  long long ans=N*(N-1)/2;

  for(auto a:A){
    if(a.second>=2){
      ans-=(a.second*(a.second-1)/2);
    }
  }



  
  
  cout<<ans<<endl;

}
