#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  
  int num=0;
  for(int i=0;i<S.length();i++){
    if(S[i]=='-'){
        num++;
    }else{
        if(i!=0){
           cout<<num<<" ";
           num=0;
        }
       
    }
  }
  cout<<endl;
}
