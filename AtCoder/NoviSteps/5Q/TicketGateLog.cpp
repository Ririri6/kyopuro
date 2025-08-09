#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

 
  int k=0;
  
  for(int i=0;i<S.length();i++){
    if((i+k)%2==0){
        if(S[i]=='o'){
            k++;
        }
    }else{
        if(S[i]=='i'){
            k++;
        }
    }
  }
  if((S.length()+k)%2==1){
        if(S[S.length()-1]=='i'){
            S+='o';
        }else{
            S+='i';
        }
        k++;
      
    }
  
 
  cout<<k<<endl;
}
