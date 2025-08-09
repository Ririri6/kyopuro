#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  string S;
  cin>>S;

  if(S[N-1]=='a' && S[N-2]=='e' && S[N-3]=='t'){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}
