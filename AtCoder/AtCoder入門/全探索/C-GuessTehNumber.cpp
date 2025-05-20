#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;

  vector<int> s(M);
  vector<int> c(M);
  for(int i=0;i<M;i++){
    cin>>s[i]>>c[i];
  }

  long long  ans=0;
  if(N==1){
    for(int i=0;i<=9;i++){
        int judge=0;
        for(int j=0;j<M;j++){
            if(c[j]!=i){
                judge=1;
            }
        }

        if(judge==0){
            ans=i;
            cout<<ans<<endl;
            return 0;
        }
    }
  }
  
  else{
  for(long long i=pow(10,N-1);i<=pow(10,N)-1;i++){
    string S=to_string(i);//調べる数値を文字に変換
    int flag=0;

    for(int j=0;j<M;j++){
        char C=c[j]+'0';

        if(S[s[j]-1]!=C){
            flag=1;
        }

        
    }
    if(flag==0){
            ans=i;
            cout<<ans<<endl;
            return 0;
    }
  }
}
  
    cout<<-1<<endl;
  
}
