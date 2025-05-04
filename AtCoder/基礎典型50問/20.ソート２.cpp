#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> C(N);
  for(int i=0;i<N;i++){
    cin>>C[i];
  }
  
  /*
  数列問題はソートで何とかなる場合が多い
  計算の都度余りをとる→途中で大きい数になるのを防ぐ
  */

  long long ans=1;
  long long mod=pow(10,9)+7;

  sort(C.begin(),C.end());

  for(int i=0;i<N;i++){
    if(C[i]-i==0){
        cout<<0<<endl;
        exit(0);
    }
    ans*=(C[i]-i);
    ans%=mod;
    
  }

  

  cout<<ans<<endl;

}
