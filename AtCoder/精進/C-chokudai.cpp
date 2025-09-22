#include <bits/stdc++.h>
using namespace std;
 
int main() {
   string S;
   cin>>S;

   long long ans=0;
   sort(S.begin(),S.end());
    do{
    string t="";
    for(int i=0;i<8;i++){
        t+=S[i];
    }
    if(t=="chokudai"){
        ans++;
    }
    ans=ans%1000000007;
    
  }while(next_permutation(S.begin(),S.end()));

  cout<<ans<<endl;
}