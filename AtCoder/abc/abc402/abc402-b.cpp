#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int Q;
  cin>>Q;

  vector<int> query(Q);
  vector<int> q(Q);
  for(int i=0;i<Q;i++){
    cin>>query[i];
    if(query[i]==1){
        cin>>q[i];
    }else{
        q[i]=0;
    }
  }
  vector<int> X;
  for(int i=0;i<Q;i++){
    if(query[i]==1){
        X.push_back(q[i]);
    }else{
        cout<<X.front()<<endl;
        X.erase(X.begin());
    }
  }


}
