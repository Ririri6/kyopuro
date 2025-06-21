#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,Q;
  cin>>N>>Q;
  
  vector<string> H(N+1);
  for(int i=0;i<N+1;i++){
    H[i]="";
  }
  for(int i=0;i<Q;i++){
    int n;
    cin>>n;

    int p;
    cin>>p;

    if(n==1){
        H[p]=H[0];
    }else if(n==2){
        string s;
        cin>>s;
        H[p]+=s;
    }else if(n==3){
        H[0]=H[p];
    }
  }
  cout<<H[0]<<endl;
}
