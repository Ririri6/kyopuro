#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,Q;
   cin>>N>>Q;

   vector<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }
   vector<long long> B(N);
   for(int i=0;i<N;i++){
    cin>>B[i];
   }
   long long sum=0;
   for(int i=0;i<N;i++){
    sum+=min(A[i],B[i]);
   }

   
   for(int i=0;i<Q;i++){
    char c;
    cin>>c;
    long long X,V;
    cin>>X>>V;
    sum-=min(A[X-1],B[X-1]);
    if(c=='A'){
        A[X-1]=V;
    }else{
        B[X-1]=V;
    }
    sum+=min(A[X-1],B[X-1]);
   


    cout<<sum<<endl;
   }


}