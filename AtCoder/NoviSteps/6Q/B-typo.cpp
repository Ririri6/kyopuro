#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S,T;
  cin>>S;
  cin>>T;

  vector<char> tmp;

  if(S==T){
    cout<<"Yes"<<endl;
    return 0;
  }

  
  
  for(int i=1;i<S.length();i++){
    for(int i=0;i<S.length();i++){
      tmp.push_back(S[i]);
    }
    char c=S[i-1];
    tmp.erase(tmp.begin()+i-1);
    tmp.insert(tmp.begin()+i,c);
    
    
    string t="";
    for(int i=0;i<tmp.size();i++){
        t+=tmp[i];
    }
    if(t==T){
        cout<<"Yes"<<endl;
        return 0;
    }

    tmp.clear();
  }
 

  cout<<"No"<<endl;
}
