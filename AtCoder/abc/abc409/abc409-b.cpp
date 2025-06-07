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
  
  int ans=0;
 
  for(int i=0;i<=A[N-1];i++){
    int n=0;
    for(int j=0;j<N;j++){
        if(A[j]>=A[i]){
            n++;
        }
    }
    
    if(n>=i){
        if(i>=ans){
           ans=i;
        }
    }
  }

  cout<<ans<<endl;
}
