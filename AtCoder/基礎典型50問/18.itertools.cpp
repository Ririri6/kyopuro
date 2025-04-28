#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  int K;

  cin>>S>>K;

  /*
  next_permutationは配列の要素をすべての並び方の通りに並び変える
  だから，辞書順にK番目のものを表示させればよいから，while文で，
  Kが１になるまで，配列の要素（文字列の各Char）を並び変え続ける
  
  */

  sort(S.begin(),S.end());
  while(K>1){
    next_permutation(S.begin(),S.end());
    K--;
  }

  cout<<S<<endl;
  
}
