#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(N);
  vector<int> B(N);

  for(int i=0;i<N;i++){
    cin>>A[i]>>B[i];
  }

  int ans=0;
  for(int i=0;i<N;i++){
    if(A[i]<B[i]){
        ans++;
    }
  }
  cout<<ans<<endl;
}
