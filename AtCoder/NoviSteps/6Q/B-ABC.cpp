#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  int ans=0;
  for(int i=0;i<S.length();i++){
    for(int j=i+1;j<S.length();j++){
        for(int k=j+1;k<S.length();k++){
            if(j-i==k-j){
                if(S[i]=='A' && S[j]=='B' && S[k]=='C'){
                    ans++;
                }
            }
        }
    }
  }

  cout<<ans<<endl;
}
