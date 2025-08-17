#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int H,W;
   cin>>H>>W;

   vector<vector<int>> A(H,vector<int>(W));
   for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        cin>>A[i][j];
    }
   }
   
   //各行の合計
   vector<long long> S(H);
   for(int i=0;i<H;i++){
       long long sum_g=0;
       for(int j=0;j<W;j++){
        sum_g+=A[i][j];
       }

       S[i]=sum_g;
   }
   //各列の合計
   vector<long long> T(W);
   for(int i=0;i<W;i++){
      long long sum_r=0;
      for(int j=0;j<H;j++){
        sum_r+=A[j][i];
      }
      T[i]=sum_r;
   }

   for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        cout<<S[i]+T[j]-A[i][j]<<" ";
    }
    cout<<endl;
   }
}
