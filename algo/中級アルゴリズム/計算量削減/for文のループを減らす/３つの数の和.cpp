#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,M;
  cin>>N>>M;
  
  long long ans=0;

  for(long long x=1;x<=N;x++){
    for(long long y=1;y<=N;y++){
        long long z=min(N,M-x-y);

        if(z>=1){
            ans+=z;
        }
        
    }
  }

  cout<<ans<<endl;
}
