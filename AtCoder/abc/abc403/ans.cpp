#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string T, U;
    cin >> T >> U;

    int n = T.length(), m = U.length();
    bool flag = false;

    for (int i = 0; i <= n - m; i++) {
        string tmp = T;
        bool jdge = true;
        for (int j = 0; j < m; j++) {
            if (tmp[i+j] == '?' || tmp[i+j] == U[j]) {
                tmp[i+j] = U[j];
            } else {
                jdge = false;
                break;
            }
        }
        if (jdge) {
            flag = true;
            break;
        }
    }

    if (flag) cout << "Yes" << endl;
    else cout << "No" << endl;
}
