#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;

   vector<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }
   sort(A.begin(),A.end());

   long long Q;
   cin>>Q;

   vector<long long> B(Q);
   
   for(int i=0;i<Q;i++){
    cin>>B[i];
   }
   
   for(int i=0;i<Q;i++){
      long long l=0;
      long long r=N;
      long long c=(l+r)/2;
      while(r>l){
        if(B[i]>=A[c]){
         l=c+1;
        }else{
         r=c;
        }
        c=(l+r)/2;
      }
      if(l==0){
         cout<<abs(A[l]-B[i])<<endl;
      }
      else if(abs(A[l]-B[i])<=abs(A[l-1]-B[i])){
         cout<<abs(A[l]-B[i])<<endl;
      }else{
         cout<<abs(A[l-1]-B[i])<<endl;
      }
      
   }

}