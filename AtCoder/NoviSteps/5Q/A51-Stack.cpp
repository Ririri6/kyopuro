#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int Q;
  cin>>Q;
  
  vector<string> query;
  for(int i=0;i<Q;i++){
    int q;
    cin>>q;

    if(q==1){
       string s;
       cin>>s;
       query.push_back(s);
    }else if(q==2){
        cout<<query.back()<<endl;
    }else if(q==3){
        query.erase(query.end());
    }
  }
}
