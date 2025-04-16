#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 入力
    int N;
    cin >> N;
    vector<int> d(N-1);
    for (int i=0; i<N-1; ++i) cin >> d[i];

    // 累積和を求める
    // acc[k]: 駅 $0$ から 駅 $k$ までの距離
    vector<int> acc(N);
    for (int i=0; i<N-1; ++i) {
        acc[i+1] = acc[i] + d[i];
    }

    // 質問に答える
    int Q;
    cin >> Q;
    for (int i=0; i<Q; ++i) {
        int l, r;
        cin >> l >> r;
        int result = acc[r] - acc[l];
        cout << result << endl;
    }
	return 0;
}