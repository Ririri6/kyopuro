#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,A,B;
  cin>>N>>A>>B;
  string S;
  cin>>S;

  for(int i=0;i<A;i++){
    S.erase(S.begin());
  }
  for(int i=0;i<B;i++){
    S.pop_back();
  }

  cout<<S<<endl;
}
