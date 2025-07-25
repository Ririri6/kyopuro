#include <bits/stdc++.h>
using namespace std;

map<pair<long long, long long>, long long> MEMO;

long long DFS(long long C, long long E, const vector<pair<long long, long long>> P) {
    auto key = make_pair(C, E);
    if (MEMO.count(key)) return MEMO[key];

    long long res = 0;

    if (C > 0) {
        res = max(res, DFS(0, E + C, P));
    }

    for (auto [A, B] : P) {
        if (E >= A) {
            long long t = E / A;
            long long nC = C + t * B;
            long long nE = E - t * A;
            res = max(res, DFS(nC, nE, P) + t);
        }
    }

    return MEMO[key] = res;
}

int main() {
    long long N, M;
    cin >> N >> M;

    vector<pair<long long, long long>> P(M);
    for (int i = 0; i < M; ++i) {
        cin >> P[i].first >> P[i].second;
    }

    cout << DFS(N, 0, P) << endl;
    return 0;
}
