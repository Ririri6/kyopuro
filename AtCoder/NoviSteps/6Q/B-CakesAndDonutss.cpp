#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  int i=0;

  if(N<4){
    cout<<"No"<<endl;
    return 0;
  }
  for(int i=0;i<100;i++){
    for(int j=0;j<N;j++){
        if((4*i+7*j)==N){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
  }

  cout<<"No"<<endl;
}
