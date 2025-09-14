#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int H,W;
   cin>>H>>W;
   vector<vector<int>> A(H, vector<int>(W));
   for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        cin>>A[i][j];
    }
   }
   vector<vector<int>> B(H, vector<int>(W));
   for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        cin>>A[i][j];
    }
   }
   vector<vector<int>> diff(H, vector<int>(W));
   for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        diff[i][j]=A[i][j]-B[i][j];
    }
   }
   
}