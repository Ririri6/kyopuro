#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;
  string T;
  cin>>T;

  set<char> t;
  for(int i=0;i<T.length();i++){
    t.insert(T[i]);
  }
  set<char> s;
  for(int i=2;i<S.length();i++){
    if(isupper(S[i])!=0){
        s.insert(S[i-1]);
    }
  }
 
  

  int count=0;
  for(auto c:s){
    for(auto d:t){
        if(c==d){
            count++;
        }
    }
  }
  if(count==s.size()){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}
