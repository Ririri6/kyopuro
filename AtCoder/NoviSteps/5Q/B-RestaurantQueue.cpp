#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int Q;
  cin>>Q;
  
  vector<int> g;
  for(int i=0;i<Q;i++){
    int num;
    cin>>num;
    if(num==1){
      int X;
      cin>>X;
      g.push_back(X);
    }else{
      int number=g.front();
      cout<<number<<endl;
      g.erase(g.begin());
    }
    
  }
}
