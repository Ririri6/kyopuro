#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  long long ans=0;

  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
        if(A[i]!=A[j]){
            ans++;
        }
    }
  }
  
  cout<<ans<<endl;

}
