#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;
  
  map<int,int> F;
  for(int i=1;i<=M;i++){
    F[i]=0;
  }
  for(int i=0;i<N;i++){
    int K;
    cin>>K;
    for(int j=0;j<K;j++){
        int a;
        cin>>a;

        F[a]++;

    }
  }

  int ans=0;
  for(auto f:F){
    if(f.second==N){
        ans++;
    }
  }

  cout<<ans<<endl;
}
