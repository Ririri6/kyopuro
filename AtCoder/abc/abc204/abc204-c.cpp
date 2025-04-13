#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;

  vector<int> A(M);
  vector<int> B(M);

  for(int i=0;i<M;i++){
    cin>>A[i]>>B[i];
  }
  
  /*スタート地点を固定したとき
  ゴール地点にできる都市の個数を数えることを
  考えてみましょう.

  ゴール地点にできる都市は、
  スタート地点からいくつかの道路を使って
  到達できるような都市です。そのような都市は、
  DFSやBFSなどの探索アルゴリズムを用いて求めることができます
  
  */
  int ans=0;


}
