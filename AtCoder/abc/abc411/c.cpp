#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,Q;
  cin>>N>>Q;

  vector<long long> A(Q);
  for(int i=0;i<Q;i++){
    cin>>A[i];
  }

  map<long long,int> M;
  for(int i=0;i<Q;i++){
    M[A[i]]=0;
  }

  int b=0;
  for(int i=0;i<Q;i++){
    int p=A[i];

    if(M[p]==1){
        if(M[p-1]==0 && M[p+1]==0){
            b--;
        }else if(M[p-1]==1 && M[p+1]==1){
            b++;
        }
    }else{
        if(M[p-1]==0 && M[p+1]==0){
            b++;
        }else if(M[p-1]==1 && M[p+1]==1){
            b--;
        }
    }
    if(M[p]==0){
        M[p]=1;
    }else{
        M[p]=0;
    }
    cout<<b<<endl;
  }
}
