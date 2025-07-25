#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;
    vector<pair<long long, long long>> P(M);
    for (int i = 0; i < M; ++i) cin >> P[i].first >> P[i].second;

    sort(P.begin(), P.end(), [](auto &a, auto &b){
        return (long double)a.second / a.first > (long double)b.second / b.first;
    });

    long long cola = N;  
    long long empty = 0; 
    long long stickers = 0;

    while (cola > 0 || empty >= P[0].first) {
        empty += cola;
        cola = 0;

        bool used = false;
        for (auto &[A, B] : P) {
            if (empty >= A) {
                long long times = empty / A;
                cola += times * B;
                stickers += times;
                empty -= times * A;
                used = true;
            }
        }
        if (!used) break;
    }

    cout << stickers << endl;

    return 0;
}
