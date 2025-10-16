#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, M, H, K;
    cin >> N >> M >> H >> K;

    string S;
    cin >> S;

    set<pair<long long, long long>> items;
    for (int i = 0; i < M; i++) {
        long long x, y;
        cin >> x >> y;
        items.insert({x, y});
    }

    long long x = 0, y = 0;
    for (int i = 0; i < N; i++) {
        H--;
        if (S[i] == 'R') x++;
        else if (S[i] == 'L') x--;
        else if (S[i] == 'U') y++;
        else if (S[i] == 'D') y--;

        if (H < 0) {
            cout << "No" << endl;
            return 0;
        }

        if (items.count({x, y})) {
            if (H < K) {
                H = K;
                items.erase({x, y});
            }
        }
    }

    cout << "Yes" << endl;
}
