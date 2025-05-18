#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;
  string T;
  cin>>T;

  

  for(int i=0;i<S.length();i++){
    for(int j=i;j<S.length();j++){
        string s="";
        for(int k=i;k<=j;k++){
            s+=S[k];
        }

        //cout<<s<<endl;

        if(s==T){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
  }

  cout<<"No"<<endl;
}
