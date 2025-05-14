#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  set<char> s;
  for(int i=0;i<S.length();i++){
    s.insert(S[i]);
  }

  if(s.size()==S.length()){
    cout<<"yes"<<endl;
  }else{
    cout<<"no"<<endl;
  }
}
