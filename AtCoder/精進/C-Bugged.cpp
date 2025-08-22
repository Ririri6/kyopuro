#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;

   vector<int> s(N);
   map<int,int> M;
   long long ans=0;
   for(int i=0;i<N;i++){
    cin>>s[i];
    ans+=s[i];
    if(s[i]%10==0){
        M[s[i]]=1;
    }else{
        M[s[i]]=0;
    }
   }

   
   if(ans%10!=0){
    cout<<ans<<endl;
    return 0;
   }else{
    for(auto m :M){
        if(m.second==0){
            cout<<ans-m.first<<endl;
            return 0;
        }
    }
   }

   cout<<0<<endl;


}