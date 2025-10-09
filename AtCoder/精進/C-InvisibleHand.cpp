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

   sort(A.begin(),A.end());
   sort(B.begin(),B.end());
   

   long long r=1000000009;
   long long l=0;
   while(abs(r-l)!=1){
    long long c=(r+l)/2;
    long long countA=0;
    for(int i=0;i<N;i++){
        if(A[i]<=c){
            countA++;
        }
    }

    long long countB=0;
    for(int j=0;j<M;j++){
        if(B[j]>=c){
            countB++;
        }
    }

    if(countA>=countB){
        r=c;
    }else{
        l=c;
    }
   }

   cout<<r<<endl;


   
}