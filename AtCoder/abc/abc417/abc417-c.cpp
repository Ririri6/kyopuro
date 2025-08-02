#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    map<long long, long long> C;
    long long ans = 0;

    for (int j = 0; j < N; j++) {
        long long k = j - A[j];
        if (C.count(k)) {
            ans += C[k];
        }
        C[j-A[j]]++;
    }

    cout << ans << endl;
}
