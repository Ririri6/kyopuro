#include <bits/stdc++.h>
using namespace std;

int main() {
  long long H, W, N;
  cin >> H >> W >> N;

  vector<long long> A(N), B(N);
  set<long long> rows, cols;

  // 入力を受け取ると同時に、登場する行・列を記録
  for (int i = 0; i < N; i++) {
    cin >> A[i] >> B[i];
    rows.insert(A[i]);
    cols.insert(B[i]);
  }

  // 座標圧縮（行）
  map<long long, long long> row_map;
  long long r_index = 1;
  for (auto r : rows) {
    row_map[r] = r_index++;
  }

  // 座標圧縮（列）
  map<long long, long long> col_map;
  long long c_index = 1;
  for (auto c : cols) {
    col_map[c] = c_index++;
  }

  // 出力（圧縮後の座標）
  for (int i = 0; i < N; i++) {
    cout << row_map[A[i]] << " " << col_map[B[i]] << endl;
  }

  return 0;
}
