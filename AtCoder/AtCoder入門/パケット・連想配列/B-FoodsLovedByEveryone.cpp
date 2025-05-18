#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;

  vector<int> K(N);
  vector<vector<int>> A(N);
  map<int,int> map;
  for(int i=0;i<N;i++){
    cin>>K[i];
    for(int j=0;j<K[i];j++){
        int a;
        cin>>a;
        A.at(i).push_back(a);
        
    }
  }

  for(int i=0;i<N;i++){
      for(int j=0;j<A[i].size();j++){
        map[A[i][j]]++;
      }
  }

  int ans=0;
  for(auto m:map){
    if(m.second==N){
        ans++;
    }
  }

  cout<<ans<<endl;

}
