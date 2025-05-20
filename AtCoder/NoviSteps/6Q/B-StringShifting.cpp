#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  set<string> s;
  vector<char> A;
  for(int i=0;i<S.length();i++){
    A.push_back(S[i]);
  }

  s.insert(S);

  for(int i=0;i<A.size();i++){
    char c=A.front();
    //cout<<c<<endl;
    A.erase(A.begin());
    A.push_back(c);
    
    string t="";
    for(int j=0;j<A.size();j++){
        t+=A[j];
    }

    //cout<<t<<endl;

    s.insert(t);

  }
 
    

  

  
  int a=0;
  for(auto c:s){
    if(s.size()==1){
        cout<<c<<endl;
        cout<<c<<endl;
    }
    else if(a==0 || a==s.size()-1){
        cout<<c<<endl;
    }
    a++;
  }
}
