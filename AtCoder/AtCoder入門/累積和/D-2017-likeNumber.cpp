#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long Q;
  cin>>Q;

  vector<long long> l(Q);
  vector<long long> r(Q);

  for(int i=0;i<Q;i++){
    cin>>l[i]>>r[i];
  }
 
  
  //素数判定
  vector<int> is_prime(100000, 1); // 1なら素数、0なら合成数
  is_prime[0] = is_prime[1] = 0; // 0と1は素数ではない

  for (int i = 2; i * i < 100000; ++i) {
    if (is_prime[i]) {
        for (int j = i * 2; j < 100000; j += i) {
            is_prime[j] = 0;
        }
    }
  }


  vector<int> A(100000,0);
  for(int i=1;i<100000;i+=2){
      if(is_prime[i]==1&& is_prime[(i+1)/2]==1 ){
        A[i]=1;
      }
  }

  vector<long long> S(1000001,0);
  
  for(int i=0;i<100000;i++){
     S[i+1]=S[i]+A[i];
  }

  for(int i=0;i<Q;i++){
    cout<<S[r[i]+1]-S[l[i]]<<endl;
  }

}
