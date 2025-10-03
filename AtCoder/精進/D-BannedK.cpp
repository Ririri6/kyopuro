#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;
   vector<long long> A(N);
   map<long long,long long> M;
   for(int i=0;i<N;i++){
    cin>>A[i];
    M[A[i]]++;
   }
   
   long long result=0;
   for(auto m:M){
        result+=(m.second*(m.second-1)/2);
     }
   for(int i=0;i<N;i++){
      long long ans=result-((M[A[i]]-1)*(M[A[i]]))/2;
      ans+=((M[A[i]]-1)*(M[A[i]]-2))/2;
     
     cout<<ans<<endl;
   }


}