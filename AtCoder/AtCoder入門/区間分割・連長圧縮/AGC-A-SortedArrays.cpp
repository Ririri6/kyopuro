#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
    cin >> N;
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    int ans = 1;
    int i = 0;
    while (i < N - 1) {
        // フラット（同じ値）をスキップ
        if (A[i] == A[i + 1]) {
            ++i;
            continue;
        }

        // 増加 or 減少 の傾きを決定
        bool increasing = A[i] < A[i + 1];

        // 同じ傾きが続く限り伸ばす
        while (i < N - 1 && ((increasing && A[i] <= A[i + 1]) || (!increasing && A[i] >= A[i + 1]))) {
            ++i;
        }

        ++ans; // 1つの部分列が終了
    }

    cout << ans << endl;
    return 0;
 

}

/*
| 観点              | 解説                                      |
| --------------- | --------------------------------------- |
| **連続区間の扱い**     | 同じ傾き（単調性）を持つ区間を見つけて伸ばすという考え方            |
| **状態の管理**       | 「傾きなし → 増加 or 減少 → 反転で分割」など、状態遷移のコード設計力 |
| **ローカルで完結する処理** | 全体を見ず、「隣接ペアだけで判断」する発想が大事                |

*/
