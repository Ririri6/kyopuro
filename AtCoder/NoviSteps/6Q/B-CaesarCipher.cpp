#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  string T;
  cin>>T;
  

  string p="abcdefghijklmnopqrstuvwxyz";

  if(S==T){
    cout<<"Yes"<<endl;
    return 0;
  }else{
    
    for(int k=1;k<=26;k++){
        string tmp=S;
        for(int i=0;i<S.length();i++){
            for(int j=0;j<26;j++){
                if(S[i]==p[j]){
                    if(j+k<26){
                       tmp[i]=p[j+k];
                    }else{
                        tmp[i]=p[j+k-26];
                    }
                    
                }
            }
            
        }
        //cout<<tmp<<endl;
        if(tmp==T){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
  }

  cout<<"No"<<endl;
}
