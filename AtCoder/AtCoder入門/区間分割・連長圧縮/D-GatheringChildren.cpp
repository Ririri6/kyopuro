#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string S;
    cin >> S;
    int N = S.size();
    vector<int> ans(N, 0);

    for (int i = 0; i < N - 1; ++i) {
        if (S[i] == 'R' && S[i + 1] == 'L') {
            int r = i;
            int l = i + 1;
            int rc = 0, lc = 0;

            // 左へRを数える
            while (r >= 0 && S[r] == 'R') {
                rc++;
                r--;
            }

            // 右へLを数える
            while (l < N && S[l] == 'L') {
                lc++;
                l++;
            }

            // R位置：偶数R + 奇数L
            ans[i]     = (rc + 1) / 2 + lc / 2;

            // L位置：奇数R + 偶数L
            ans[i + 1] = rc / 2 + (lc + 1) / 2;

            // i = l までスキップ（すでに見たところ）
            i = l - 1;
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
| 観点           | 解説                    |
| ------------ | --------------------- |
| どこに集まる？      | 「RLの境界」の2マス           |
| なぜ偶奇が関係？     | 偶数歩進むと元の向きと同じ側に戻るから   |
| なぜ全体を見なくていい？ | RLの境界以外には最終的に誰も残らないから |
| なぜ高速？        | 各RLペアだけ処理 → O(N) 時間   |

*/