#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  
  long long wa=0;
  long long ans=0;

  for(int i=0;i<N;i++){
     wa+=A[i];
  }

  for(int i=0;i<N;i++){
    ans+=(A[i]*wa);
  }

  cout<<ans<<endl;

  /*
  模範解答
  // 答えが 32-bit 範囲を超えうることに注意
    long long S = accumulate(A.begin(), A.end(), 0LL);
  // 出力
  cout << S * S << endl;
  */

}
