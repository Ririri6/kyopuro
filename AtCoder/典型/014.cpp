#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;

   vector<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }
   vector<long long> B(N);
   for(int i=0;i<N;i++){
    cin>>B[i];
   }

   map<long long,long long> M;
   long long ans=0;
   for(int i=0;i<N;i++){
    M[A[i]]++;
    M[B[i]]++;
   }

   sort(A.begin(),A.end());
   sort(B.begin(),B.end());
   for(int i=0;i<N;i++){
    ans+=abs(A[i]-B[i]);
   }

   cout<<ans<<endl;
   
}