#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> A(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    // 仲が悪い関係
    int M;
    cin>>M;
    vector<vector<bool>> bad(N, vector<bool>(N, false));
    for (int i = 0; i < M; i++) {
        int x, y;
        cin >> x >> y;
        --x; --y;
        bad[x][y]=true;
        bad[y][x]=true;
    }

    int FULL = (1 << N);//1をNビット左にシフト(1→1000000のようになる)
    const long long INF = 1e18;//1e18はlong long型の取れるマックス
    vector<vector<long long>> dp(FULL, vector<long long>(N, INF));
    //FULL=2^N
    // 初期化: 各選手が第1区を走る
    for (int i = 0; i < N; i++) {
        dp[1<<i][i] = A[i][0];
    }

    // 遷移
    for (int mask = 0; mask < FULL; mask++) {
        int pos = __builtin_popcount(mask); // 今何区目まで埋まったか
        for (int last = 0; last < N; last++) {
            if (dp[mask][last] == INF) continue;
            for (int nxt = 0; nxt < N; nxt++) {
                //mask を右に nxt ビットシフト
                if (mask >> nxt & 1) continue;       // すでに走っている
                if (bad[last][nxt]) continue;        // 仲が悪いのでタスキ渡せない
                int nmask = mask | (1 << nxt);
                dp[nmask][nxt] = min(dp[nmask][nxt], dp[mask][last] + A[nxt][pos]);
            }
        }
    }

    long long ans = INF;
    for (int last = 0; last < N; last++) {
        ans = min(ans, dp[FULL-1][last]);
    }

    if (ans == INF) cout << -1 << endl;
    else cout << ans << endl;
}
