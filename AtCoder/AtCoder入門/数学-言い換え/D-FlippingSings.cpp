#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> A(N);
  long long num=0;
  for(int i=0;i<N;i++){
    cin>>A[i];
    if(A[i]<0){
        num++;
        A[i]=-A[i];
    }
  }
  
  long long ans=0;
  if(num%2==0){
    for(int i=0;i<N;i++){
        ans+=A[i];
    }

    cout<<ans<<endl;
    return 0;
  }else{
    sort(A.begin(),A.end());
    ans-=A[0];
    for(int i=1;i<N;i++){
        ans+=A[i];
    }

    cout<<ans<<endl;
    return 0;
    
  }
  
  
  
 
}
