#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S,T;
  cin>>S;
  cin>>T;

  int min=1000;

  if(S.length()==1 && T.length()==1){
    if(S==T){
        cout<<0<<endl;
        return 0;
    }else{
        cout<<1<<endl;
        return 0;
    }
  }

  for(int i=0;i<S.length()-T.length()+1;i++){
    string s=S.substr(i,T.length());

    //cout<<s<<endl;
    
    int num=0;
    for(int j=0;j<T.length();j++){
        if(T[j]!=s[j]){
            num++;
        }
    }

    if(num<min){
        min=num;
    }

  }

  cout<<min<<endl;
}
