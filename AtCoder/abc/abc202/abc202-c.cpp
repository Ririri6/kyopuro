#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  vector<int> B(N);
  for(int i=0;i<N;i++){
    cin>>B[i];
  }
  vector<int> C(N);
  for(int i=0;i<N;i++){
    cin>>C[i];
  }

  int ans=0;

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        if(A[i]==B[C[j]-1]){
            ans++;
        }
    }
  }

  cout<<ans<<endl;
}
