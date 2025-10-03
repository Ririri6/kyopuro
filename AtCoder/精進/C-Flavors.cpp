#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;

   vector<long long> F(N);
   vector<long long> S(N);
   for(int i=0;i<N;i++){
    cin>>F[i]>>S[i];
   }

   long long ans=0;
   vector<pair<long long, long long>> p(N);
   for(int i=0;i<N;i++){
    p.at(i)=make_pair(S[i],F[i]);
   }

   sort(p.rbegin(),p.rend());
   
   if(p.at(0).second==p.at(1).second){
    for(int i=1;i<N;i++){
        long long a;
        if(p.at(0).second==p.at(i).second){
            a=p.at(i).first/2+p.at(0).first;
        }else{
            a=p.at(i).first+p.at(0).first;
        }
        if(a>ans){
            ans=a;
        }
    }
   }else{
      ans=p.at(0).first+p.at(1).first;
   }

   cout<<ans<<endl;
}