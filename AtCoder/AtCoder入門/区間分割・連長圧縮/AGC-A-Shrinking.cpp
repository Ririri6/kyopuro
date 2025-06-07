#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
    cin >> S;
    int N = S.size();
    int ans = N; // 最大でもN-1回なのでNで初期化

    for (char c = 'a'; c <= 'z'; ++c) {
        string T = S;
        int cnt = 0;

        // cだけが残るまで操作を繰り返す
        while (true) {
            bool allSame = true;
            for (char ch : T) {
                if (ch != c) {
                    allSame = false;
                    break;
                }
            }
            if (allSame) break;

            string next = "";
            for (int i = 0; i < (int)T.size() - 1; ++i) {
                if (T[i] == c || T[i + 1] == c) {
                    next += c;
                } else {
                    next += T[i]; // どちらもcでない → 残しても意味はないが、仮に残す
                }
            }
            T = next;
            cnt++;
        }

        ans = min(ans, cnt);
    }

    cout << ans << endl;
    return 0;


}
