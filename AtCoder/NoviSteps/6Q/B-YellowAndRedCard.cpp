#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,Q;
  cin>>N>>Q;

  map<int,int> P;
  for(int i=1;i<=N;i++){
    P[i]=0;
  }

  for(int i=0;i<Q;i++){
    int num,x;
    cin>>num>>x;

    if(x==1){
        P[x]+=1;
    }else if(x==2){
        P[x]+=2;
    }else{
        if(P[x]>=2){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    
  }
}
