#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  string T="abcdefghijklmnopqrstuvwxyz";
  set <char> s;
  for(int i=0;i<S.length();i++){
    s.insert(S[i]);
  }
  
  vector<char> a;
  for(int i=0;i<26;i++){
    int flag=0;
    for(auto c:s){
        if(c==T[i]){
            flag=1;
            break;
        }
    }
    if(flag==0){
        a.push_back(T[i]);
    }
  }

  if(a.size()==0){
    cout<<"None"<<endl;
  }else{
    cout<<a.front()<<endl;
  }

 
}
