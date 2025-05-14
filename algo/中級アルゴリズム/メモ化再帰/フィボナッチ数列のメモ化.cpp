#include <bits/stdc++.h>
using namespace std;

// func(N) の値を記録するメモ(配列)を用意する
vector<long long> memo;

// 再帰関数
long long func(long long N) {
    // 過去に計算済みの場合メモに記録された値を返す
    if (memo[N]!=-1) return memo[N];

    // そうでない場合、計算結果をメモに記録しながら返す
    // 終了条件 (func(0) = 0, func(1) = 1)
    if (N==0) return memo[N] = 0;
    if (N==1) return memo[N] = 1;

    // 再帰呼び出し
    return memo[N] = func(N-1) + func(N-2);
}

int main() {
    // 入力
    long long N;
    cin >> N;

    // メモを -1 で初期化
    memo.resize(N+1,-1);

    // 出力
    cout << func(N) << endl;
}
