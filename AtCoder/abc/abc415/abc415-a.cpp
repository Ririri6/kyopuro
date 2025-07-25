#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  int x;
  cin>>x;

  for(int i=0;i<N;i++){
    if(A[i]==x){
        cout<<"Yes"<<endl;
        return 0;
    }
  }

  cout<<"No"<<endl;
}
