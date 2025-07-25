#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;

  vector<string> S(N);
  for(int i=0;i<N;i++){
    cin>>S[i];
  }

  vector<string> T(M);
  for(int i=0;i<M;i++){
    cin>>T[i];
  }

  int ans=0;

  for(int i=0;i<N;i++){
    string a="";
    for(int j=0;j<3;j++){
        a+=S[i].back();
        S[i].pop_back();
    }
    char tmp=a[0];
    a[0]=a[2];
    a[2]=tmp;
    for(int k=0;k<M;k++){
        if(a==T[k]){
            ans++;
            break;
        }
    }
  }

  cout<<ans<<endl;
}
