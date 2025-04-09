#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  string M;

  for(int i=0;i<S.length();i++){
    if(S[i]=='0'){
        M+='0';
    }else if(S[i]=='1'){
        M+='1';
    }else if(S[i]=='6'){
        M+='9';
    }else if(S[i]=='8'){
        M+='8';
    }else if(S[i]=='9'){
        M+='6';
    }
  }

  string ans;

  for(int i=M.length()-1;i>=0;i--){
       ans+=M[i];
  }

  cout<<ans<<endl;
}
