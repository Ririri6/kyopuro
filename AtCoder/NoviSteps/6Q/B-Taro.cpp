#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;

  vector<int> A(M);
  vector<char> B(M);
  for(int i=0;i<M;i++){
    cin>>A[i]>>B[i];
  }
  
  map<int,int> H;
  for(int i=1;i<=N;i++){
    H[i]=0;
  }

  for(int i=0;i<M;i++){
    if(H[A[i]]==0 && B[i]=='M'){
        cout<<"Yes"<<endl;
        H[A[i]]=1;
    }else{
        cout<<"No"<<endl;
    }
  }

}
