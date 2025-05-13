#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> T(N);
  for(int i=0;i<N;i++){
    cin>>T[i];
  }

  int M;
  cin>>M;
  vector<int> P(M);
  vector<int> X(M);
  
  for(int i=0;i<M;i++){
    cin>>P[i]>>X[i];
  }

  int sum=0;
  for(int i=0;i<N;i++){
    sum+=T[i];
  }

  for(int i=0;i<M;i++){
    int s=sum;
    s-=(T[P[i]-1]-X[i]);
    cout<<s<<endl;
  }

}
