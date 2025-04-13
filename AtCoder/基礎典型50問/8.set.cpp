#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<long long> a(N);

  for(int i=0;i<N;i++){
    cin>>a[i];
  }

  set<long long> b;
  for(int i=0;i<N;i++){
    b.insert(a[i]);
  }


  

  cout<<b.size()<<endl;
}
