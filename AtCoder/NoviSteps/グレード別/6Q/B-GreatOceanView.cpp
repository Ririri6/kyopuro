#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> H(N);
  for(int i=0;i<N;i++){
    cin>>H[i];
  }

  int ans=1;

  for(int i=1;i<N;i++){
     int flag=0;
     for(int j=0;j<=i-1;j++){
        if(H[i]<H[j]){
            flag=1;
        }
     }

     if(flag==0){
        ans++;
     }
  }

  cout<<ans<<endl;
}


