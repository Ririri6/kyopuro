#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;
  
  set<string> S;
  for(int i=0;i<N;i++){
    string s;
    cin>>s;
    S.insert(s);
  }

  cout<<S.size()<<endl;


}
