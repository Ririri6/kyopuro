#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  int N;
  cin>>N;

  vector<int> l(N);
  vector<int> r(N);
  for(int i=0;i<N;i++){
    cin>>l[i]>>r[i];
  }
  for(int i=0;i<N;i++){
    vector<char> C;
    for(int j=l[i]-1;j<r[i];j++){
        C.push_back(S[j]);
    }
    for(int k=l[i]-1;k<r[i];k++){
        S[k]=C.back();
        C.pop_back();
    }
  }

  cout<<S<<endl;
}
