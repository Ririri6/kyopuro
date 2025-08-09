#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int Q;
  cin>>Q;

  vector<int> C;
  for(int i=0;i<100;i++){
    C.push_back(0);
  }

  for(int i=0;i<Q;i++){
    int num;
    cin>>num;
    if(num==1){
        int x;
        cin>>x;
        C.insert(C.begin(),x);
    }else{
        cout<<C.front()<<endl;
        C.erase(C.begin());
    }
  }
}
