#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  string T="";
  for(int i=0;i<S.length();i++){
    if(S[i]=='#'){
        T+='#';
    }
     else{
        T+='o';
     }
  }

  for(int i=0;i<T.length();i++){
    int flag=0;
    if(T[i]=='o'){
       for(int j=i+1;j<T.length();j++){
        if(T[j]=='o'){
           for(int k=i;k<=j;k++){
            if(T[k]=='#'){
               flag=1;
            }
        }
        if(flag==0){
            T[(i+j)/2]='.';
        }
        }
        
    }
    }
    
  }

  cout<<T<<endl;
}
