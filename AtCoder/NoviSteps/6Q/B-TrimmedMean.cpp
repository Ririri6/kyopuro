#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> X(5*N);
  for(int i=0;i<5*N;i++){
    cin>>X[i];
  }

  sort(X.begin(),X.end());
  for(int i=0;i<N;i++){
    X[5*N-1-i]=0;
  }

  for(int i=0;i<N;i++){
    X[i]=0;
  }
  
  
  double ans=0;
  for(int i=0;i<5*N;i++){
     ans+=X[i];
  }
  

  cout<<fixed << setprecision(15)<<ans/(3*N)<<endl;

}
