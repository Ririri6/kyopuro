#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  set<long long> A;
  for(int i=0;i<N;i++){
    long long a;
    cin>>a;

    A.insert(a);
  }

  cout<<A.size()<<endl;
}
