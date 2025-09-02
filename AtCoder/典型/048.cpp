#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,K;
   cin>>N>>K;
   vector<long long> A(N);
   vector<long long> B(N);
   vector<long long> diff;
   for(int i=0;i<N;i++){
    cin>>A[i]>>B[i];
    diff.push_back(B[i]);
    diff.push_back(A[i]-B[i]);
   }
   long long ans=0;
   sort(diff.rbegin(),diff.rend());
   for(int i=0;i<K;i++){
       ans+=diff[i];
       
   }

   cout<<ans<<endl;
   
   
}