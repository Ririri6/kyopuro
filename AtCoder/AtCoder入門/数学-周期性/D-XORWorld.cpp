#include <bits/stdc++.h>
using namespace std;
 
long long oddsolve(long long a) { return (a+1)/2 % 2; }
long long solve(long long a) {
    if (a % 2 == 1) return oddsolve(a);
    else return oddsolve(a+1) ^ (a+1);
}
int main() {
    long long A, B; cin >> A >> B;
    cout << (solve(B) ^ solve(A-1)) << endl;
}

/*
まず「A以上 B以下の値の総和を求めよ」という問題は、
「X以下の値の総和を求めよ」という問題だと思うことができる:
・B以下の値についての答えから
・A−1以下の値についての答えを引く
ここで「引く」という行為は、
XOR 和においては XOR 和を取ること自体をさす。
XOR の世界では「足し算」も「引き算」も一緒なのだ。
この考え方はすごく出て来る。

ひとまず桁ごとに考えるのが XOR の定石
*/