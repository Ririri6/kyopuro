#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  map<int,int>m;
  for(int i=0;i<N;i++){
    m[A[i]]++;
  }

  for(int i=1;i<N;i++){
    if(m[i]!=1){
        cout<<"No"<<endl;
        return 0;
    }
  }
  cout<<"Yes"<<endl;
}
