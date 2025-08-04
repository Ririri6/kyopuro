#include <bits/stdc++.h>
using namespace std;

int main() {
    long long L, R;
    cin >> L >> R;

    for (long long d = R - L; d >= 1; --d) {
        for (long long x = L; x + d <= R; ++x) {
            long long y = x + d;
            if (gcd(x, y) == 1) {
                cout << d << endl;
                return 0;
            }
        }
    }

}
