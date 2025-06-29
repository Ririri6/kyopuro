#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  sort(S.begin(),S.end());

  string ans="";
  for(int i=0;i<S.length();i++){
    ans+=S[i];
  }

  cout<<ans<<endl;
}
