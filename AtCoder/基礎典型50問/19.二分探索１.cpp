#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    vector<int> x(Q);
    for (int i = 0; i < Q; i++)
    {
        cin >> x[i];
    }
    /*
    ・二分探索は「条件を満たす最大・最小」を高速で探し出す
    　アルゴリズム
    ・区間の中央の値が条件を満たすか確認し，徐々に区間を狭めて
    　目的の値を得る
    ・左端＝区間の最小，右端＝区間の最大

    */

    sort(A.begin(), A.end());

    for (int i = 0; i < Q; i++)
    {

        // 左端
        int l = -1;
        // 右端
        int r = N;
        while (1 < r - l)
        {
            // 中央
            int c = (l + r) / 2;

            // A[c]<xならば(条件も満たさない)
            if (A[c] < x[i])
            {
                // 左端を中央に
                l = c;
            }
            else
            {
                r = c;
            }
        }

        cout << N - l -1<< endl;
    }
}
