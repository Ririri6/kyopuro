#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> A(N);
  vector<long long> T(N);

  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  T=A;

  sort(T.begin(),T.end());
  vector<long long> S;
  S.push_back(T[0]);
  for(int i=1;i<N;i++){
    if(T[i]!=T[i-1]){
        S.push_back(T[i]);
    }
  }

  for(int i=0;i<N;i++){
    long long l=0;
    long long r=S.size()-1;
    long long c=(l+r)/2;
    while(r>=l){
        if(A[i]>S[c]){
            l=c+1;
        }else if(A[i]<S[c]){
            r=c-1;
        }else{
            break;
        }
        c=(r+l)/2;    
    }

    if(i>0){
        cout<<" ";
    }
    cout<<c+1;

  }

  cout<<endl;
}
