#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,Q;
  cin>>N>>Q;

  map<int,int> H;
  for(int i=1;i<=N;i++){
    H[i]=1;
  }



  vector<int> T(Q);
  for(int i=0;i<Q;i++){
    cin>>T[i];
  }

  for(int i=0;i<Q;i++){
    if(H[T[i]]==0){
        H[T[i]]=1;
    }else{
        H[T[i]]=0;
    }
  }

  int ans=0;
  for(int i=1;i<=N;i++){
    if(H[i]==1){
        ans++;
    }
  }

  cout<<ans<<endl;

}
