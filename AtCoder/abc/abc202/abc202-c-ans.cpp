#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  
  //入力
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  vector<int> B(N);
  for(int i=0;i<N;i++){
    cin>>B[i];
  }
  vector<int> C(N);
  for(int i=0;i<N;i++){
    cin>>C[i];
  }

  //A,B,C<=N count配列を用意
  vector<int> count(N);
  //count配列を用いてB[C[i]-1]の場所に＋１を入れておく
  for(int i=0;i<N;i++){
    count[B[C[i]-1]]+=1;
  }
  
  //回答（総数）
  long long ans=0;
  //A[i]==B[C[i]-1]となるような総数を求めればよいから，
  //count関数の[A[i]]の１がansに加わる
  for(int i=0;i<N;i++){
    ans+=count[A[i]];
  }

  cout<<ans<<endl;
}
