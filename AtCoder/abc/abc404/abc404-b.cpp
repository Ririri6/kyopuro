#include <bits/stdc++.h>
using namespace std;

//配列が違う個数を数える
//回転させない場合，この個数分増やす
int count(vector<string> S,vector<string>T){
  int N=S.size();
  int ans=0;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(S[i][j]!=T[i][j]){
        ans++;
      }
    }
  }

  return ans;
}

//90度回転
vector<string> rot(vector<string> S){
  int N=S.size();
  vector<string>ret(N,string(N,'.'));
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      ret[i][j]=S[N-1-j][i];
    }
  }

  return ret;
}
 
int main() {
  int N;
  cin>>N;

  vector<string> S(N);
  vector<string> T(N);
  for(int i=0;i<N;i++){
    cin>>S[i];
  }
  for(int i=0;i<N;i++){
    cin>>T[i];
  }
  

  
  int ans=10000;

  /*
  ０，１，２，３回転しかない
  「回転 → 色変更 → 回転」のように、色変更を途中で挟む操作順は、
  「最初に回転をすべてやってから色変更をする」のと等価
  回転してから色を塗り替えても，色を一か所塗り替え手から回転しても同じ

  ＊＊操作の順序を固定して考えてもOK
  */
  for(int i=0;i<4;i++){
    ans=min(ans,count(S,T)+i);
    S=rot(S);
  }
  

  cout<<ans<<endl;

}
