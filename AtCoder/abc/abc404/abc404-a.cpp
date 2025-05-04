#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  string m="abcdefghijklmnopqrstuvwxyz";
  
  for(int i=0;i<26;i++){
    int flag=0;
    for(int j=0;j<S.length();j++){
        if(S[j]==m[i]){
          flag=1;
        }
    }

    if(flag==0){
        cout<<m[i]<<endl;
        break;
    }
  }
  
}
