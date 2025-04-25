#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,W;
  cin>>N>>W;

  vector<pair<long long, long long>> items(N);
  
  
  
  for (int i = 0; i < N; ++i) {
    cin >> items[i].first >> items[i].second;
}

  /*
  組み合わせを考えるんだけど，組み合わせ方に個数制限がないから
  for文で回すに回せない
  →こういう時に貪欲法

  おいしさが高い順に選んでいき，Wｇになるまで
  */
  
  sort(items.begin(), items.end(), [](const auto& a, const auto& b) {
    return a.first > b.first;
});

  
  long long ans=0;

  for (int i = 0; i < N; ++i) {
    long long delicious = items[i].first;
    long long weight = items[i].second;

    if (weight <= W) {
        ans += weight * delicious;
        W -= weight;
    } else {
        ans += delicious * W;//容量は分割して入れてもよい
        break;
    }
}
  
  
  cout<<ans<<endl;



}
