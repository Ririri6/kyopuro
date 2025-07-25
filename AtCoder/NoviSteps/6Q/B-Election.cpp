#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  map<string,int> S;
  for(int i=0;i<N;i++){
    string s;
    cin>>s;
    S[s]++;
  }

  int M=0;
  for(auto s:S){
    M=max(M,s.second);
  }

  for(auto s:S){
    if(s.second==M){
        cout<<s.first<<endl;
        return 0;
    }
  }
}
