#include <bits/stdc++.h>
using namespace std;


int main() {
   long long N;
   cin>>N;

   vector<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }   


   vector<long long> fl(N+1,0),S;
   long long v=1;
   while(fl[v]==0){
    fl[v]=1;
    S.push_back(v);
    v=A[v];
   }

   vector<long long> B;
   for(auto s:S){
    if(s==v){
        v=-1;
    }
    if(v==-1){
        B.push_back(v);
    }
   }

   cout<<B.size()<<endl;
   for(int i=0;i<B.size();i++){
    cout<<B[i]<<" ";
   }
   cout<<endl;


}