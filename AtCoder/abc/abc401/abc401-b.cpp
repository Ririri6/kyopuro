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
  int flag=0;//ログアウト状態＝０

  for(int i=0;i<N;i++){
    if(flag==0 && S[i]=="private"){
        ans++;
    }
    if(S[i]=="login"){
        flag=1;
    }else if(S[i]=="logout"){
        flag=0;
    }

    

  }

  cout<<ans<<endl;
}
