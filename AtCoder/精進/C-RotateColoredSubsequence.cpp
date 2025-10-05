#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;
    vector<int> C(N);
    for (int i = 0; i < N; i++) cin >> C[i];

    // 各グループごとの文字列を構築
    vector<string> groups(M);
    for (int i = 0; i < N; i++) {
        groups[C[i] - 1].push_back(S[i]);
    }

    // グループごとに「右シフト」するが、実際には末尾→先頭だけやる
    for (int g = 0; g < M; g++) {
        if (!groups[g].empty()) {
            char last = groups[g].back();
            groups[g].pop_back();
            groups[g].insert(groups[g].begin(), last);
        }
    }

    // 答えを構築
    string ans;
    vector<int> pos(M, 0); // 各グループの現在位置
    ans.reserve(N);
    for (int i = 0; i < N; i++) {
        int g = C[i] - 1;
        ans.push_back(groups[g][pos[g]]);
        pos[g]++;
    }

    cout << ans << endl;
}
