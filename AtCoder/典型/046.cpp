#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;
   vector<long long> A(N);
   vector<long long> B(N);
   vector<long long> C(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }
   for(int i=0;i<N;i++){
    cin>>B[i];
   }
   for(int i=0;i<N;i++){
    cin>>C[i];
   }

   map<int,long long> nA;
   map<int,long long> nB;
   map<int,long long> nC;
   for(int i=0;i<N;i++){
      nA[A[i]%46]++;
      nB[B[i]%46]++;
      nC[C[i]%46]++;
   }
   
   long long ans=0;
   for(int i=0;i<46;i++){
    for(int j=0;j<46;j++){
        for(int k=0;k<46;k++){
            if((i+j+k)%46==0){
                ans+=(nA[i]*nB[j]*nC[k]);
            }
        }
    }
   }

   cout<<ans<<endl;
   
}