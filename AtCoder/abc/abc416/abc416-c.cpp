#include <bits/stdc++.h>
using namespace std;

void suretsu(vector<string>&S, int K,vector<int> &C, vector<string> &f){
    if(C.size()==K){
        string A="";
        for(int i=0;i<C.size();i++){
            A+=S[C[i]];
        }
        f.push_back(A);
        return ;

    }

    for(int i=0;i<S.size();i++){
        C.push_back(i);
        suretsu(S,K,C,f);
        C.pop_back();
    }
}
 
int main() {
  int N,K;
  long long X;
  cin>>N>>K>>X;

  vector<string> S(N);
  for(int i=0;i<N;i++){
    cin>>S[i];
  }

  vector<string> f;
  vector<int> C;
  suretsu(S,K,C,f);
 
  sort(f.begin(),f.end());
  cout<<f[X-1]<<endl;
  
  
}
