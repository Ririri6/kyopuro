#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;
  
  vector<pair<int, int>> cond(M);
  //条件を格納
  for(auto& [A,B]:cond){
    cin>>A>>B;
  }

  int K;
  cin>>K;
  
  vector<pair<int, int>> choice(K);
  //ボールのペアを格納
  for(auto& [C,D]:choice){
    cin>>C>>D;
  }

  int ans=0;
  //bit全探索
  for(int bit=0;bit<1<<K;bit++){
    vector<bool> ball(N);
    for(int i=0;i<K;i++){
      int c = choice[i].first;
      int d = choice[i].second;
      //bitのi番目が1かどうかを判断
      if(bit &(1<<i)){
        ball[c]=1;
      }else{
        ball[d]=1;
      }
    }
    int cnt=0;
    for(auto [A,B] : cond){
      if(ball[A] && ball[B]){
        cnt++;
      }
    }
    if(ans<cnt){
      ans=cnt;
    }
  }

  cout<<ans<<endl;
  
}
