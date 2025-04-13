#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  map<string,int> m;

  for(int i=0;i<N;i++){
    string S;
    int T; 
    cin>>S>>T;

    m(T)=S;

    sort(m.begin(),m.end(),m.rend());
   
    cout<<m[1]<<endl;
  }
}
