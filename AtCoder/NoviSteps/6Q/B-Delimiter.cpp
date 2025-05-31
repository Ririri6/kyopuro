#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> A;

  
  while(true){
    int a;
    cin>>a;
    if(a==0){
        A.push_back(a);
        break;
    }else{
        A.push_back(a);
    }
  }

  for(int i=A.size()-1;i>=0;i--){
    cout<<A[i]<<endl;
  }
}
