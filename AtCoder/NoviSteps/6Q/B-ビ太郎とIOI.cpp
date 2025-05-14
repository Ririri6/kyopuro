#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  string S;
  cin>>S;

  int flag=0;

  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
        for(int k=j+1;k<N;k++){
            if(S[i]=='I' && S[j]=='O' && S[k]=='I'){
                flag=1;
            }
        }
    }
  }


  if(flag==1){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }

}
