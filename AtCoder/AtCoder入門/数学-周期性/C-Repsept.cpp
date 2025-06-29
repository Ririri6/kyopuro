#include <bits/stdc++.h>
using namespace std;

int main() {
    long long K;
    cin >> K;

    if (K % 2 == 0) {
        cout << -1 << endl;
        return 0;
    }
    /*
    modで考える
    */
    long long rem = 0;
    for (int i = 1; i <= 1000000; i++) {
        // 次の桁を追加して、剰余を更新
        rem = (rem * 10 + 7) % K;

        if (rem == 0) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
