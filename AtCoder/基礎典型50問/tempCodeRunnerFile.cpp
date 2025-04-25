#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,W;
  cin>>N>>W;

  map<long long,int> map(N);
  
  long long A;
  int B;
  
  for(auto m:map){
    cin>>m.first>>m.second;
  }

  /*
  組み合わせを考えるんだけど，組み合わせ方に個数制限がないから
  for文で回すに回せない
  →こういう時に貪欲法

  おいしさが高い順に選んでいき，Wｇになるまで
  */
  
  sort(map.begin(),map.end());
  
  long long ans=0;

  for(auto m:map){
    long long delicious=m.first;
    int weight=m.second;

    if(weight<=W){
       ans+=weight*delicious;
       W-=weight;
    }else{
        ans+=delicious*W;
        break;
    }
  }

  
  
  cout<<ans<<endl;



}
