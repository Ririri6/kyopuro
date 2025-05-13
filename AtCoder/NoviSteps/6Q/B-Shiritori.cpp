#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<string> W(N);
  for(int i=0;i<N;i++){
    cin>>W[i];
  }

  int flag=0;
  for(int i=1;i<N;i++){
    for(int j=0;j<i;j++){
        if(W[i]==W[j]){
            flag=1;
        }
    }

    if(W[i][0]!=W[i-1][W[i-1].length()-1]){
        flag=1;
    }
  }

  if(flag==0){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}
