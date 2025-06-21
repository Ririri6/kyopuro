#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> D(N);
  for(int i=0;i<N;i++){
    cin>>D[i];
  }
  
  
  for(int i=0;i<N-1;i++){
    int d=0;
    for(int j=i;j<N-1;j++){
        d+=D[j];
        cout<<d<<" ";
    }
    cout<<endl;
  }
}
