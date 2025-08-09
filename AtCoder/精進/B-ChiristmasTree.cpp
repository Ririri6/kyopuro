#include <bits/stdc++.h>
using namespace std;

long long floor(long long x, long long m) {
    long long  r = (x % m + m) % m;
    return (x - r) / m;
}
 
int main() {
  long long A,M,L,R;
  cin>>A>>M>>L>>R;
  
  long long ans=floor(R-A,M)-floor(L-A-1,M);
 
  

  cout<<ans<<endl;

}
