#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  int flag=0;
  int ans=0;

  while(flag==0){
    for(int i=0;i<N;i++){
     if(A[i]%2==1){
       flag=1;
       cout<<ans<<endl;
       return 0;
     }
    }

    for(int i=0;i<N;i++){
        A[i]=A[i]/2;
    }

    ans++;

    
  }

  cout<<ans<<endl;
  

}
