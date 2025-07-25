#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;
  
  for(int i=0;i<S.length();){
    if(S[i]=='#'){
        for(int j=i+1;j<S.length();j++){
            if(S[j]=='#'){
                cout<<i+1<<","<<j+1<<endl;
                i=j+1;
                break;
            }
        }
    }else{
        i++;
    }
  }
}
