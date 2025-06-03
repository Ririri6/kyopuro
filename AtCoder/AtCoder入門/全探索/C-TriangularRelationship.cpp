#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin>>N>>K;

  long long ans=0;

  vector<long long> A(K);
  for(int i=1;i<=N;i++){
    A[i%K]++;
  }
  
  //aはKで割ったあまり
  //整数を見るんじゃなくて余りで見ていく
  for(int a=0;a<K;a++){
    int b=(K-a)%K;
    int c=(K-a)%K;
    if((b+c)%K==0){
      ans+=A[a]*A[b]*A[c];
    }
  }



  cout<<ans<<endl;
}
