#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;
  
 
  vector<string> A;

  for(int i=0;i<S.length();i++){
    
    for(int j=i;j<S.length();j++){
        string s="";
        for(int k=i;k<=j;k++){
            s+=S[k];
        }

        int flag=0;
        for(int m=0;m<s.length();m++){
          if(s[m]!='A' && s[m]!='C' && s[m]!='G' && s[m]!='T'){
            flag=1;
          }
        }
        if(flag==0){
            A.push_back(s);
        }
    }

    
  }

  int max=0;

  for(auto a:A){
    //cout<<a<<endl;
    if(max<a.length()){
        max=a.length();
    }
  }

  cout<<max<<endl;
  
  

  
  
}
