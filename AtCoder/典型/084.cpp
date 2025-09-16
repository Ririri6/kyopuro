#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;
   string S;
   cin>>S;

   vector<long long> M;
   for(int i=0;i<N;){
       int j=i;
       long long num=0;
       while(true){
        if(S[i]==S[j]){
            num++;
        }else{
            M.push_back(num);
            break;
        }
        j++;
       }
       i=j;
   }
   long long ans=0;
   long long num=0;
   if(M.size()>=2){
     for(auto m:M){
        
        num+=m;
        ans+=(m*(N-num));
        
     }
   }
   cout<<ans<<endl;


}