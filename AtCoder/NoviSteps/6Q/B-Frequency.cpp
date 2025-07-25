#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  map<char,int> M;
  for(int i=0;i<S.length();i++){
    M[S[i]]++;
  }
  
  int num=0;
  for(auto m:M){
     num=max(num,m.second);
  }

  for(auto m:M){
    if(m.second==num){
        cout<<m.first<<endl;
        return 0;
    }
  }
}
