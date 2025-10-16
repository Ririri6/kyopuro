#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N,D;
   cin>>N>>D;

   vector<int> X(N),Y(N);
   for(int i=0;i<N;i++){
    cin>>X[i]>>Y[i];
   }
   
   vector<int> A(N,0);
   A[0]=1;

   map<int,vector<int>> M;
   vector<pair<long long, long long>> p;
   for(int i=1;i<N;i++){
      p.push_back(make_pair((x[0]-x[i])*(x[])))
   }

   for(int i=0;i<N;i++){
      if(A[i]==1){
         cout<<"Yes"<<endl;
      }else{
         cout<<"No"<<endl;
      }
   }
}