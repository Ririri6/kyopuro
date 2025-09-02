#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,L;
   cin>>N>>L;
   
   //NがLより小さい場合、移動方法は1通りしかないので、1を出力してプログラムを終了
   if(N<L){
    cout<<1<<endl;
    return 0;
   }
   
   //DPテーブルの初期化
   vector<long long> dp(N+1);

   //0からL-1までの各段については、移動方法は1通りしかない
   for(int i=0;i<L;i++){
    dp[i]=1;
   }

   //L段目については、0段目から一気にL段上る方法と、1段ずつ上る方法の2通りがある
   dp[L]=2;

   //L+1段目からN段目までの各段については、直前の段から1段上る方法と、L段前から一気にL段上る方法の和が移動方法の総数となる
   for(int i=L+1;i<N+1;i++){
    dp[i]=dp[i-1]+dp[i-L];
    //答えが大きくなりすぎるのを防ぐため、各段ごとに10^9 + 7で割った余りを求める
    dp[i]%=(1000000000+7);
   }

   cout<<dp[N]<<endl;




}