#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> rules(M); // {Ai, Bi}
    for (int i = 0; i < M; ++i) {
        cin >> rules[i].first >> rules[i].second;
    }

    // お得な交換順に並べる（AiあたりのBiが多い順）
    sort(rules.begin(), rules.end(), [](pair<int, int> a, pair<int, int> b) {
        return 1.0 * a.second / a.first > 1.0 * b.second / b.first;
    });

    int cola = N;
    int empty = 0;
    int stickers = 0;

    while (true) {
        // 1. コーラを全部飲む
        empty += cola;
        cola = 0;

        bool exchanged = false;
        // 2. 各ルールでできるだけ交換
        for (auto [A, B] : rules) {
            while (empty >= A) {
                empty -= A;
                cola += B;
                ++stickers;
                exchanged = true;
            }
        }

        if (!exchanged) break; // もう交換できない
    }

    cout << stickers << endl;
    return 0;
}