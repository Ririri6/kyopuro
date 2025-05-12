#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  string a="abcdefghijklmnopqrstuvwxyz";

  map<char,int> m;
  for(int i=0;i<a.size();i++){
    m[a[i]]=0;
  }

  for(int i=0;i<S.size();i++){
    m[S[i]]+=1;
  }

  for(auto p:m){
    if(p.second==0){
        cout<<p.first<<endl;
        return 0;
    }
  }
}


/*
模範解答

#include<bits/stdc++.h>

using namespace std;

int main(){
  string s;
  cin >> s;

  //a~zまでが与えられた文字列Sに含まれるかどうかを見ればよい
  for(char c='a';c<='z';c++){
    bool ok=true;
    for(int i=0;i<s.size();i++){
      if(s[i]==c){ok=false;}
    }
    if(ok){
      cout << c << "\n";
      return 0;
    }
  }
  return 0;
}


*/
