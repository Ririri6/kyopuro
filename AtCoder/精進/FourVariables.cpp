#include <bits/stdc++.h>
using namespace std;
 
template <typename T>
map<T, T> prime_factor(T n) {
    map<T, T> ret;
    for (T i = 2; i * i <= n; i++) {
        T tmp = 0;
        while (n % i == 0) {
            tmp++;
            n /= i;
        }
        ret[i] = tmp;
    }
    if (n != 1) ret[n] = 1;
    return ret;
}
/*  divisor_num(n)
    入力：整数 n
    出力：nの約数の個数
    計算量：O(√n)
*/
template <typename T>
T divisor_num(T N) {
    map<T, T> pf = prime_factor(N);
    T ret = 1;
    for (auto p : pf) {
        ret *= (p.second + 1);
    }
    return ret;
}
int main() {
   long long N;
   cin>>N;

   long long ans=0;

   for(int i=1;i<=N-1;i++){
    int j=N-i;
    long long n=divisor_num(i);
    long long m=divisor_num(j);

    ans+=(n*m);
    
   }
   cout<<ans<<endl;
}