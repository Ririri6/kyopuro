#include <bits/stdc++.h>
using namespace std;
 
int main() {
  /*
  対話形式の問題
  すでに使われた数字を管理し，まだ使われていない数字を出力
  
  結局何回入力させたいのかを考える
  */

  int N;
    cin >> N; // 入力を受け取る
    
    vector<bool> Used(2 * N + 2, false); // 使った数の記録（初期値はfalse）
    
    // 最初は「1」を出力
    cout << 1 << endl;
    Used[1] = true; // 1は使った
    
    // N回繰り返す
    for (int i = 0; i <= N; ++i) {
        int x;
        cin >> x; // 青木くんの入力を受け取る
        
        Used[x] = true; // xは使った
        
        if (x == 0) { // xが0の場合
            return 0; // 終了
        }
        
        // 1から(2N+1)まで繰り返し
        for (int k = 1; k < 2 * N + 2; ++k) {
            if (!Used[k]) { // まだ使っていないなら
                cout << k << endl; // kを出力
                Used[k] = true; // kを使った
                break; // ループを抜ける
            }
        }
    }
    

  
}
