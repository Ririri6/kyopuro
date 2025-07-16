#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  set<int> A;
  for(int i=0;i<N;i++){
    int a;
    cin>>a;
    A.insert(a);
  }
  
  int i=0;
  cout<<A.size()<<endl;
  for(auto n:A){
    if(i>0){
        cout<<" ";
    }
    cout<<n;
    i++;
  }
  cout<<endl;
}
