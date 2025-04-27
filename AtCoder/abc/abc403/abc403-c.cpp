#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,M,Q;
  cin>>N>>M>>Q;

  
  
  int n;
  int x;
  int y;
  
 
  vector<pair> P;
  vector<int> A(N);
  for(int i=1;i<=N;i++){
    A[i]=0;
  }
  for(int i=0;i<Q;i++){
    cin>>n;
    if(n==1){
        cin>>x>>y;
        
        P.push_back(make_pair(x,y));
    }else if(n==2){
        cin>>x;
        A[x]=1
    }else{
        cin>>x>>y;
        
    }
  }

  
  
}
