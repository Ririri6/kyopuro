#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> P(N);
  for(int i=0;i<N;i++){
    cin>>P[i];
  }

  int r=1;
  map<int,int> M;
  for(int i=0;i<N;i++){
    M[P[i]]++;
  }

  //マップを後ろから探索（キーが大きい順に探索できる）
  for(auto it=M.rbegin(); it!=M.rend();it++){
    int x=it->first;
    int k=it->second;

    it->second=r;//mapのvalueを人数から順位に上書き
    r+=k;
  }

  for(int i=0;i<N;i++){
    cout<<M[P[i]]<<endl;
  }
}
