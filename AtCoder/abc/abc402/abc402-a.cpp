#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;
  
  string ans;
  for(int i=0;i<S.length();i++){
     if(isupper(S[i])){
         ans+=S[i];
     }
  }

  cout<<ans<<endl;
}
