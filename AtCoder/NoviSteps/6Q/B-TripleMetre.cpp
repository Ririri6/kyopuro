#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  string T="";
  for(int i=0;i<100000;i++){
    T+="oxx";
  }
  
  for(int i=0;i<T.length();i++){
    string U=T.substr(i,S.length());
    if(U==S){
        cout<<"Yes"<<endl;
        return 0;
    }
  }
  cout<<"No"<<endl;
}
 