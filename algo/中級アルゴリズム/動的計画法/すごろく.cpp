#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 入力
    int N, M;
    cin >> N >> M;
    vector<int> D(M);
    for (int i = 0; i < M; ++i) cin >> D[i];

    // 動的計画法の舞台となる配列
    vector<bool> dp(N + 1, false);

    // マス 0 にははじめから到達している
    dp[0] = true;

    // 順に計算していく
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (i - D[j] >= 0 && dp[i - D[j]]) {
                dp[i] = true;
            }
        }
    }

    // 出力
    cout << (dp[N] ? "Yes" : "No") << endl;
}