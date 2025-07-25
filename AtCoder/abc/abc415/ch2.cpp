#include <bits/stdc++.h>
using namespace std;

map<pair<long long, long long>, long long> memo;

long long dfs(long long cola, long long empty, const vector<pair<long long, long long>>& rules) {
    auto key = make_pair(cola, empty);
    if (memo.count(key)) return memo[key];

    long long res = 0;

    if (cola > 0) {
        res = max(res, dfs(0, empty + cola, rules));
    }

    for (auto [A, B] : rules) {
        if (empty >= A) {
            long long times = empty / A;
            long long newCola = cola + times * B;
            long long newEmpty = empty - times * A;
            res = max(res, dfs(newCola, newEmpty, rules) + times);
        }
    }

    return memo[key] = res;
}

int main() {
    long long N, M;
    cin >> N >> M;

    vector<pair<long long, long long>> rules(M);
    for (int i = 0; i < M; ++i) {
        cin >> rules[i].first >> rules[i].second;
    }

    cout << dfs(N, 0, rules) << endl;
    return 0;
}
