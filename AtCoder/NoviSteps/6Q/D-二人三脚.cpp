#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(2*N-1);
  map<int ,int>m;
  for(int i=0;i<2*N-1;i++){
    cin>>A[i];
    m[A[i]]++;
  }

  

  for(auto p:m){
    if(p.second!=2){
        cout<<p.first<<endl;
        return 0;
    }
  }
  




}
