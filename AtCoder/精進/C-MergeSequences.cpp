#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,M;
   cin>>N>>M;

   vector<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }

   vector<long long> B(M);
   for(int i=0;i<M;i++){
    cin>>B[i];
   }

   map<long long,vector<long long>> C;
   for(int i=0;i<N;i++){
    C[A[i]].push_back(0);
    C[A[i]].push_back(i);
   }
   for(int j=0;j<M;j++){
    C[B[j]].push_back(1);
    C[B[j]].push_back(j);
   }
   
   long long id=1;
   for(auto c:C){
      
      if(c.second.at(0)==0){
         A[c.second.at(1)]=id;
      }else if(c.second.at(0)==1){
        B[c.second.at(1)]=id;
      }
      id++;
   }

   for(int i=0;i<N;i++){
    cout<<A[i]<<" ";
   }
   cout<<endl;
   for(int i=0;i<M;i++){
    cout<<B[i]<<" ";
   }
   cout<<endl;
}