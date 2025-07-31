#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,D;
  cin>>N>>D;

  vector<string> S(N);
  for(int i=0;i<N;i++){
    cin>>S[i];
  }

  vector<int> d(D,0);
  for(int i=0;i<D;i++){
    int flag=0;
    for(int j=0;j<N;j++){
        if(S[j][i]=='x'){
            flag=1;
        }
    }
    if(flag==0){
        d[i]=1;
    }
  }
  
 
  int m=0;
  int ans=0;
  for(int i=0;i<D;i++){
    if(d[i]==1){
        m++;
    }else{
        ans=max(ans,m);
        m=0;
    }
  }
  ans=max(ans,m);

  cout<<ans<<endl;
}
