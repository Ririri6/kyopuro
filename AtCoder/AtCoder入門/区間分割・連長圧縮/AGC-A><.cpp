#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  vector<int> C;

  for(int i=0;i<S.length();){
    char c=S[i];
    int j=i;
    int num=0;

    while(true){
        if(S[i]==S[j]){
            num++;
        }else{
            C.push_back(num);
            break;
        }
        j++;
    }
    i=j;
  }
  
  long long ans=0;
  for(int i=0;i<C.size();i++){
      if(S[0]=='>'){
        if(i%2==0){
            
        }
      }
  }
}
