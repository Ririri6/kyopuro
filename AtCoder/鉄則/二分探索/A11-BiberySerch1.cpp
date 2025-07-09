#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,X;
  cin>>N>>X;
  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  long long r=N-1;
  long long l=0;
  long long c=(r+l)/2;
  while(r>=l){
    if(X>A[c]){
        l=c+1;
    }else if(X<A[c]){
        r=c-1;
    }else if(X==A[c]){
        cout<<c+1<<endl;
        return 0;
    }

    c=(r+l)/2;

  }

  

 
}
