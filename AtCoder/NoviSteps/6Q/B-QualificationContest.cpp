#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,K;
  cin>>N>>K;

  vector<string> S(N);
  for(int i=0;i<N;i++){
    cin>>S[i];
  }

  vector<string> a(K);
  for(int i=0;i<K;i++){
    a[i]=S[i];
  }

  sort(a.begin(),a.end());

  for(int i=0;i<K;i++){
    cout<<a[i]<<endl;
  }
}
