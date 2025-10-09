#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;

   vector<double> A(N),B(N);
   for(int i=0;i<N;i++){
    cin>>A[i]>>B[i];
   }

   vector<double> S(N);
   map<double,vector<long long>> M;
   for(int i=0;i<N;i++){
     S[i]=A[i]/(A[i]+B[i]);
     M[S[i]].push_back(i+1);
   }
   
   vector<long long> P;
   for(auto m:M){
    for(int i=0;i<m.second.size();i++){
        P.push_back(m.second[m.second.size()-1-i]);
    }
    
   }
   
   for(int i=0;i<N;i++){
    cout<<P[N-1-i]<<" ";
   }
   cout<<endl;




}