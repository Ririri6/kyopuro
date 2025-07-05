#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  int sum=0;
  for(int i=0;i<N;i++){
    sum+=A[i];
  }

  if(sum<=M){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}
