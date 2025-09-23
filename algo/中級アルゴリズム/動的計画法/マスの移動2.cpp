#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N,M;
   cin>>N>>M;

   vector<int> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }

   vector<int> DP(N);
   DP[0]=0;
   for(int i=1;i<N;i++){
    DP[i]=DP[i-1]+A[i];
    for(int j=1;j<=M;j++){
        
        if(i-j>=0){
            if(DP[i-j]+j*A[i]<DP[i]){
                DP[i]=DP[i-j]+j*A[i];
            }
        }
    }
   }
   cout<<DP[N-1]<<endl;
}