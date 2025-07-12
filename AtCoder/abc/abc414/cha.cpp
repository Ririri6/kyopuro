#include <bits/stdc++.h>
using namespace std;

bool kaibun(const string& s) {
    return s == string(s.rbegin(), s.rend());
}

string fA(long long x, int b) {
    string s;
    while (x > 0) {
        s += (char)((x % b) + '0');
        x /= b;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int A;
    long long N;
    cin >> A >> N;

    long long ans = 0;

    int lenMax = to_string(N).length();

    for (int i = 1; i <= lenMax; i++) {
        int h = (i + 1) / 2;
        long long lower = pow(10, h - 1);
        long long upper = pow(10, h);

        for (long long j = lower; j < upper; j++) {
            string s = to_string(j);
            string r = s;
            reverse(r.begin(), r.end());

            string pal_str;
            if (i % 2 == 0)
                pal_str = s + r;
            else
                pal_str = s + r.substr(1);

            long long x = stoll(pal_str);
            if (x > N) break;

            if (kaibun(fA(x, A))) {
                ans += x;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
