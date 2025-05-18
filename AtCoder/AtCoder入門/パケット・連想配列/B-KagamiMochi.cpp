#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  

  set<int> d;
  for(int i=0;i<N;i++){
    int D;
    cin>>D;

    d.insert(D);
  }

  cout<<d.size()<<endl;


}
