#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<string> S(N);
  vector<string> T(N);
  for(int i=0;i<N;i++){
    cin>>S[i]>>T[i];
  }
  
  int flag=0;
  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
        if(S[i]==S[j] && T[i]==T[j]){
            flag=1;
            break;
        }
    }
  }

  if(flag==0){
    cout<<"No"<<endl;
  }else{
    cout<<"Yes"<<endl;
  }
  
}
