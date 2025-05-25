#include <bits/stdc++.h>
using namespace std;

string A_function(string S){
    S.push_back('0');
    return S;
}

string B_function(string S){
    for(int i=0;i>S.length();i++){
        int s=S[i]-'0';
        if(s!=9){
            s+=1;
        }else{
            s=0;
        }
        char n=s+'0';
        S[i]=n;
    }

    return S;
}
 
int main() {
  string S;
  cin>>S;

  int ans=0;
  
  for(int i=S.length()-1;i>=0;i--){
    int v=S[i]-'0';
    int u;
    if(i<S.length()-1){
        u=S[i+1]-'0';
    }else{
        u=0;
    }
    int b=(10+v-u)%10;
    ans+=b;

  }

    ans+=S.length();
    cout<<ans<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
}
