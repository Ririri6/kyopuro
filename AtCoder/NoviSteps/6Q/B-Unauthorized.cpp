#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<string> S(N);
  for(int i=0;i<N;i++){
    cin>>S[i];
  }

  int ans=0;
  int pre=0;//logout:0,login:1
  for(int i=0;i<N;i++){
    if(pre==0){
        if(S[i]=="private"){
            ans++;
        }
    }
    if(S[i]=="login"){
        pre=1;
    }else if(S[i]=="logout"){
        pre=0;
    }
  }

  cout<<ans<<endl;
}
