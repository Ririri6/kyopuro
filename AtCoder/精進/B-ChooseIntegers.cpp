#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A,B,C;
  cin>>A>>B>>C;

  if(A%B==C){
    cout<<"YES"<<endl;
    return 0;
  }else{
   for(int i=1;i<=A*B;i++){
    if((B*i+C)%A==0){
        cout<<"YES"<<endl;
        return 0;
    }
   }
  }
  cout<<"NO"<<endl;
}
