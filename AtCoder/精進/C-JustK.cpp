#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N,K;
   cin>>N>>K;
   vector<string> S(N);
   for(int i=0;i<N;i++){
    cin>>S[i];
   }

   int ans=0;
   for(int bit=0;bit<(1<<N);bit++){
     map<char,int> T;
     for(int i=0;i<N;i++){
        if(bit & (1<<i)){
           for(int j=0;j<S[i].length();j++){
            T[S[i][j]]++;
          }
        }
        
     }
     
     int num=0;
     for(auto t:T){
        if(t.second==K){
            num++;
        }
     }
     ans=max(ans,num);
   }
   
   cout<<ans<<endl;


}