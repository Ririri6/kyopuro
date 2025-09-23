#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;
   
   vector<int> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }

   vector<int> DP(N);
   DP[0]=0;
   DP[1]=DP[0]+A[1];

   for(int i=2;i<N;i++){
      DP[i]=min(DP[i-1]+A[i],DP[i-2]+2*A[i]);
   }

   cout<<DP[N-1]<<endl;

}