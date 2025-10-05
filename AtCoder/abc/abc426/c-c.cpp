#include <bits/stdc++.h>
using namespace std;

struct SegmentTree {
    int n;
    vector<int> seg;

    SegmentTree(int N) {
        n = 1;
        while (n < N) n <<= 1;
        seg.assign(2*n, INT_MAX);
    }

    // 単点更新: idx の値を val に
    void update(int idx, int val) {
        idx += n;
        seg[idx] = val;
        while (idx > 1) {
            idx >>= 1;
            seg[idx] = min(seg[idx*2], seg[idx*2+1]);
        }
    }

    // 区間最小値 [l,r)
    int query(int l, int r) {
        int res = INT_MAX;
        l += n; r += n;
        while (l < r) {
            if (l & 1) res = min(res, seg[l++]);
            if (r & 1) res = min(res, seg[--r]);
            l >>= 1; r >>= 1;
        }
        return res;
    }

    // 条件を満たす最左位置を探す
    int find_first(int x) {
        if (seg[1] > x) return -1; // 全体が条件を満たさない
        int idx = 1;
        while (idx < n) {
            if (seg[idx*2] <= x) {
                idx = idx*2;
            } else {
                idx = idx*2+1;
            }
        }
        return idx - n;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Q;
    cin >> N >> Q;

    SegmentTree st(N+2);
    vector<int> version(N+1);

    for (int i=1; i<=N; i++) {
        version[i] = i;
        st.update(i, i);
    }

    while (Q--) {
        int X, Y;
        cin >> X >> Y;
        int ans = 0;

        while (true) {
            int pos = st.find_first(X);
            if (pos == -1 || pos > N) break; // 条件満たすPCがない
            ans++;
            version[pos] = Y;
            st.update(pos, Y);
        }

        cout << ans << "\n";
    }
}
