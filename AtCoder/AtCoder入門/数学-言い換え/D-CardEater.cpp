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

  int n=0;
  for(auto c:A){
    if(c.second!=1){
        n+=(c.second-1);
    }
  }
  
  
  //nこを消したい
  cout<<N-(n/2+n%2)*2<<endl;
  
}
