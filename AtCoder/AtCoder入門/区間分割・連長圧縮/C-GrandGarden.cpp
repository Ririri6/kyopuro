#include <bits/stdc++.h>
using namespace std;

 int N;
  
vector<int> h(101);
int ans=0;
void f(int L,int R){
  if(L>=R){
    return ;
  }

  int mi=1001;
  for(int i=L;i<R;i++){
    if(h[i]<mi){
      mi=h[i];
    }
  }
  ans+=mi;
  for(int i=L;i<R;i++){
    h[i]-=mi;
  }
  
    vector<int> zero_positions;
    zero_positions.push_back(L - 1); 
    for (int i = L; i < R; ++i) {
        if (h[i] == 0) {
            zero_positions.push_back(i);
        }
    }
    zero_positions.push_back(R);
     for (int i = 0; i + 1 < zero_positions.size(); ++i) {
        int left = zero_positions[i] + 1;
        int right = zero_positions[i + 1];
        f(left, right);
    }

}
 
int main() {
  cin>>N;
  for(int i=0;i<N;i++){
    cin>>h[i];
  }

  f(0,N);
  cout<<ans<<endl;

}

/*
再帰関数を使わない

int main() {
    int N;
    cin >> N;

    vector<int> H(N);
    for (int i = 0; i < N; ++i) {
        cin >> H[i];
    }

    int ans = 0;
    int prev = 0; // 前の高さ（最初は0）

    for (int i = 0; i < N; ++i) {
        if (H[i] > prev) {
            ans += H[i] - prev;
        }
        prev = H[i]; // 今の高さを次の比較用に保存
    }

    cout << ans << endl;
    return 0;
}

問題が「区間操作」に見えても、個別に注目するとシンプルになることがある

「必要なときに、必要なだけ」操作することが、最小操作になることが多い

差分（今と前）に注目するだけで全体の把握ができる場合がある

*/