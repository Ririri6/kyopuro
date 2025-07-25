#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  map<int,int> A;
  for(int i=0;i<N;i++){
    int a;
    cin>>a;
    A[a]++;
  }
  
  int m=100;
  for(auto n:A){
    m=min(m,n.second);
  }
  for(auto b:A){
    if(b.second==m){
        cout<<b.first<<endl;
        return 0;
    }
  }


}
