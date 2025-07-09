#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int H,W;
  cin>>H>>W;

  vector<vector<int>> a(H,vector<int>(W));
  
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        cin>>a[i][j];
    }
  }
  
  int ans=0;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        if(a[i][j]%2==1){
            if(i+1<H && a[i+1][j]%2==1){
                ans++;
                a[i+1][j]+=a[i][j];
                a[i][j]=0;
            }else if(i-1>=0 && a[i-1][j]%2==1){
                ans++;
                a[i-1][j]+=a[i][j];
                a[i][j]=0;
            }else if(j+1<W && a[i][j+1]%2==1){
                ans++;
                a[i][j+1]+=a[i][j];
                a[i][j]=0;
            }else if(j-1>=0 && a[i][j-1]%2==1){
                ans++;
                a[i][j-1]+=a[i][j];
                a[i][j]=0;
            }
        }
    }
  }
}
