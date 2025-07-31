#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,K;
  cin>>N>>K;

  map<int,int> M;
  for(int i=1;i<=N;i++){
    M[i]=0;
  }
 
  for(int i=0;i<K;i++){
    int d;
    cin>>d;
    for(int j=0;j<d;j++){
         int A;
         cin>>A;
         M[A]++;
    }
  }

  int ans=0;
  for(auto m:M){
    if(m.second==0){
        ans++;
    }
  }
  cout<<ans<<endl;
}
