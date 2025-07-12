#include <bits/stdc++.h>
using namespace std;

bool kaibun(const string& s) {
    return s == string(s.rbegin(), s.rend());
}

string fA(int x, int base) {
    string s;
    while (x > 0) {
        s += (char)((x % base) + '0');  
        x /= base;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    int A;
    int N;
    cin >> A >> N;

    long long ans = 0;
    for (int x = 1; x <= N; x++) {
        string dec = to_string(x);        
        string baseA = fA(x, A);     

        if (kaibun(dec) && kaibun(baseA)) {
            ans += x;
        }
    }

    cout << ans << endl;
    return 0;
}
