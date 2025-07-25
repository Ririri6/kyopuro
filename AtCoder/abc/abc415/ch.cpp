#include <bits/stdc++.h>
using namespace std;

long long dp[1000000000000000001][1000000000000000001]; // dp[cola][empty] = 最大シール数
bool visited[1001][1001];

long long N, M;
vector<pair<long long, long long>> rules;

long long dfs(long long cola, long long empty) {
    if (visited[cola][empty]) {
        return dp[cola][empty];
    }
    visited[cola][empty] = true;

    int res = 0;

    // 1. 飲む
    if (cola > 0) {
        res = max(res, dfs(cola - 1, empty + 1));
    }

    // 2. 交換
    for (auto [A, B] : rules) {
        if (empty >= A) {
            res = max(res, dfs(cola + B, empty - A) + 1); // シール1枚増える
        }
    }

    dp[cola][empty] = res;
    return res;
}

int main() {
    cin >> N >> M;
    rules.resize(M);
    for (int i = 0; i < M; ++i) {
        cin >> rules[i].first >> rules[i].second;
    }

    cout << dfs(N, 0) << endl;
    return 0;
}
