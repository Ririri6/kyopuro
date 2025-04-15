#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  long long K;
  cin>>N>>K;
/*
  vector<long long> A(N);
  vector<long long> B(N);

  for(long long i=0;i<N;i++){
    cin>>A[i]>>B[i];
  }

  long long ans=0;
  long long money=K;

  while(money>0){
      money--;
      ans++;
      
      for(long long i=0;i<N;i++){
        if(A[i]==ans){
          money+=B[i];
        }
      }
      
  }

  cout<<ans<<endl;

*/

vector<pair<long long, long long>>vec;
long long A,B;
for(int i=0;i<N;i++){
  cin>>A>>B;
  vec.push_back({A,B});
}

sort(vec.begin(),vec.end());
for(int i=0;i<N;i++){
  if(vec[i].first>K){
    break;
  }else{
    K+=vec[i].second;
  }
}

cout<<K<<endl;

  
}
