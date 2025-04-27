#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string T;
  cin>>T;
  string U;
  cin>>U;

  vector<string> S;
  

  for(int i=0;i<T.length();i++){
    string tmp=T;
        for(int j=0;j<U.length();j++){
            if((i+j<T.length() && T[i+j]=='?') ||(i+j<T.length() &&T[i+j]==U[j]) ){
                tmp[i+j]=U[j];
            }
            
        }

        S.push_back(tmp);
    
    

  }

 

  int flag=0;
  for(int i=0;i<S.size();i++){
    for(int j=0;j<T.size();j++){
        if(S[i].substr(j,U.size())==U){
           flag=1;
        }
    }
  }

  if(flag==1){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }

  

}
