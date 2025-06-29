#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<string> S(N);
  vector<int> C(N);
  for(int i=0;i<N;i++){
    cin>>S[i]>>C[i];
  }

  map<string,int> M;
  int T=0;
  for(int i=0;i<N;i++){
     M[S[i]]=C[i];
     T+=C[i];
  }

  int num=T%N;
  int c=0;
  for(auto m:M){
    if(c==num){
        cout<<m.first<<endl;
        return 0;
    }
    c++;
  }
}
