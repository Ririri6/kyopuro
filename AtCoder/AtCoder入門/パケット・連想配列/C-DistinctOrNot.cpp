#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  set<long long> A;
  for(int i=0;i<N;i++){
    int a;
    cin>>a;

    A.insert(a);

  }

  if(A.size()==N){
    cout<<"YES"<<endl;
  }else{
    cout<<"NO"<<endl;
  }
}
