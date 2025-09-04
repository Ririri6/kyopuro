#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;

   vector<vector<int>> A(N, vector<int>(6));

   for(int i=0;i<N;i++){
    for(int j=0;j<6;j++){
        cin>>A[i][j];
    }
   }

   long long ans=1;
   for(int i=0;i<N;i++){
    long long num=0;
    for(int j=0;j<6;j++){
      num+=A[i][j];
    }
    ans*=num;
    ans%=1000000007;
   }

   

   cout<<ans<<endl;



}