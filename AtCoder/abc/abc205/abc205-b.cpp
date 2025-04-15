#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  sort(A.begin(),A.end());

  vector<int> vec(N);
  for(int i=0;i<N;i++){
    vec[i]=i+1;
  }

  if(A==vec){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}
