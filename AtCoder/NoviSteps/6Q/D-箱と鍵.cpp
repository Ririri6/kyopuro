#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  set<int> B;
  for(int i=0;i<M;i++){
    int b;
    cin>>b;
    B.insert(b);
  }

  int ans=0;
  for(int i=0;i<N;i++){
    for(auto key:B){
        if(A[i]==key){
           ans++;
        }
    }
  }

  cout<<ans<<endl;
}
