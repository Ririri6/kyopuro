#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  long long Q;
  cin>>Q;

  vector<long long> X(Q);
  for(int i=0;i<Q;i++){
    cin>>X[i];
  }

  sort(A.begin(),A.end());

  for(int i=0;i<Q;i++){
    long long r=N-1;
    long long l=0;
    long long c=(r+l)/2;
    long long num=0;
    while(r>=l){
        if(A[c]>X[i]){
            r=c-1;
        }
        if(A[c]<X[i]){
            l=c+1;
        }if(A[c]==X[i]){
            c--;
            break;
        }
        
        c=(r+l)/2;
    }
    cout<<c+1<<endl;
  }
}
