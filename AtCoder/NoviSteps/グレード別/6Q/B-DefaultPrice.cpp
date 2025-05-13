#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;

  vector<string> C(N);
  for(int i=0;i<N;i++){
    cin>>C[i];
  }

  vector<string> D(M);
  for(int i=0;i<M;i++){
    cin>>D[i];
  }

  vector<int> P(M+1);
  for(int i=0;i<M+1;i++){
    cin>>P[i];
  }
  
  int sum=0;
  
  for(int i=0;i<N;i++){
    int flag=0;
    for(int j=0;j<M;j++){
        if(C[i]==D[j]){
            flag=1;
            sum+=P[j+1];
        }
    }
    if(flag==0){
        sum+=P[0];
    }
  }

  cout<<sum<<endl;


}
