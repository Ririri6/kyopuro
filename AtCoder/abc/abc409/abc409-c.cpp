#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,L;
  cin>>N>>L;

  vector<long long> d(N-1);
  for(int i=0;i<N-1;i++){
    cin>>d[i];
  }
 
  long long ans=0;
  

  vector<long long> T(N);
  for(int i=1;i<N;i++){
     T[i]=T[i-1]+d[i-1];
     T[i]=T[i]%L;
  }

  map<long long,int> P;
  for(long long t:T){
    P[t]++;
  }

  if(L%3!=0){
    cout<<0<<endl;
    return 0;
  }

  
   for (auto [a, e] : P) {
        long long b = (a + L/3) % L;
        long long c = (a + 2 * (L/3)) % L;

        if (P.count(b) && P.count(c)) {
            long long f = P[b];
            long long g = P[c];
            ans += 1LL * e * f * g; 
        }
    }

  cout<<ans/3<<endl;

}
