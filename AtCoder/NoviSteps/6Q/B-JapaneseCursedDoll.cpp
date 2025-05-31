#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,T,P;
  cin>>N>>T>>P;

  vector<int> L(N);
  for(int i=0;i<N;i++){
    cin>>L[i];
  }

  int n=0;

  for(int i=0;i<N;i++){
    if(L[i]>=T){
        n++;
    }
  }
  if(n>=P){
    cout<<0<<endl;
    return 0;
  }


  int ans=1;
  while(true){
    int num=0;
    for(int i=0;i<N;i++){
       L[i]++;
       if(L[i]>=T){
        num++;
       }

    }
    if(num>=P){
        cout<<ans<<endl;
        return 0;
    }
    ans++;
  }
  
}
