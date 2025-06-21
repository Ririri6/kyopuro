#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,A;
  cin>>N>>A;

  vector<long long> T(N);
  for(int i=0;i<N;i++){
    cin>>T[i];
  }

  long long t=0;
  for(int i=0;i<N;i++){
    if(T[i]<=t){
        t+=A;
    }else{
        t+=(T[i]-t);
        t+=A;
    }
    cout<<t<<endl;
  }
}
