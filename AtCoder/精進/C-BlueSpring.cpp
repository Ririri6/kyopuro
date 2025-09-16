#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, D, P;
    cin >> N >> D >> P;

    vector<long long> F(N);
    for (int i = 0; i < N; i++) cin >> F[i];
    sort(F.rbegin(), F.rend());

    vector<long long> prefix(N+1, 0);
    for (int i = 0; i < N; i++) prefix[i+1] = prefix[i] + F[i];

    long long ans = LLONG_MAX;
    for (int i = 0; i <= N; i++) {
        long long pass_cost = ((i + D - 1) / D) * P;  // ceil(i/D)*P
        long long normal_cost = prefix[N] - prefix[i];
        ans = min(ans, pass_cost + normal_cost);
    }
    cout << ans << endl;
}
