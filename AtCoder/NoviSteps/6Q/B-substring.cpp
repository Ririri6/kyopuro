#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  set<string> A;

  for(int i=0;i<S.length();i++){
    for(int j=i;j<S.length();j++){
        string t="";
        for(int k=i;k<=j;k++){
            t+=S[k];
        }
        A.insert(t);
    }
  }

  cout<<A.size()<<endl;
}
