#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<string> S(N);
  for(int i=0;i<N;i++){
    cin>>S[i];
  }

  map<string,long long> map;
  for(int i=0;i<N;i++){
    map[S[i]]++;
  }

  vector<pair<long long,string>> M;
  for(auto m:map){
    M.push_back({m.second,m.first});
  }

  sort(M.rbegin(),M.rend());

  vector<string> a;
  long long num=M[0].first;
  for(auto m:M){
    if(m.first==num){
        a.push_back(m.second);
    }
  }
   
  sort(a.begin(),a.end());
  for(auto c:a){
     cout<<c<<endl;
  }
}
