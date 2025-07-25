#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string w;
  cin>>w;

  map<char,int> M;
  for(int i=0;i<w.length();i++){
    M[w[i]]++;
  }

  for(auto m:M){
    if(m.second%2==1){
        cout<<"No"<<endl;
        return 0;
    }
  }

  cout<<"Yes"<<endl;
  return 0;
}
