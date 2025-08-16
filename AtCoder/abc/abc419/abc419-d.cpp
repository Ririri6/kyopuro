#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,M;
   cin>>N>>M;

   string S;
   cin>>S;
   string T;
   cin>>T;

   vector<long long> L(M);
   vector<long long> R(M);
   for(int i=0;i<M;i++){
    cin>>L[i]>>R[i];
   }
   for(int i=0;i<M;i++){
    string tmp_S=S.substr(L[i]-1,R[i]-L[i]+1);
    
    string tmp_T=T.substr(L[i]-1,R[i]-L[i]+1);
    
     
    S.replace(L[i]-1,R[i]-L[i]+1,tmp_T);
    T.replace(L[i]-1,R[i]-L[i]+1,tmp_S);
   

   }

   cout<<S<<endl;
}
