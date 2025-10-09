#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;

   vector<long long> A(3*N);
   for(int i=0;i<N*3;i++){
    cin>>A[i];
   }
   map<long long ,vector<long long>> M;
   for(int i=0;i<3*N;i++){
    M[A[i]].push_back(i+1);
   }

   map<long long,long long> B; 
   for(int i=0;i<N;i++){
     long long c=M[i+1][M[i+1].size()/2];
     B[c]=i+1;
     
   }
   
   for(auto b:B){
    cout<<b.second<<" ";
   }
   cout<<endl;


}