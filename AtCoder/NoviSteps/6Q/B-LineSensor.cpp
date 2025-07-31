#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int H,W;
  cin>>H>>W;

  vector<string> C(H);
  for(int i=0;i<H;i++){
    cin>>C[i];
  }

  map<int,int> X;
  for(int i=1;i<=W;i++){
    X[i]=0;
  }

  for(int j=0;j<W;j++){
    for(int i=0;i<H;i++){
        if(C[i][j]=='#'){
            X[j+1]++;
        }
    }
  }

  for(auto x:X){
    cout<<x.second<<" ";
  }
  cout<<endl;
}
