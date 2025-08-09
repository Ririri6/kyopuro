#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> A(7);
  for(int i=0;i<7;i++){
    cin>>A[i];
  }

  map<int,int> M;
  for(int i=0;i<7;i++){
    M[A[i]]++;
  }

  int x=0;
  int y=0;
  for(auto m:M){
    if(m.second>=3){
        x++;
    }else if(m.second>=2){
        y++;
    }
  }

  if((x>=1 && y>=1) || x>=2){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}
