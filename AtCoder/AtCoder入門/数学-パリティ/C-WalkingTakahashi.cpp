#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long X,K,D;
  cin>>X>>K>>D;
  
  
  X=abs(X);

  long long c=min(K,X/D);
  
  X-=c*D;

  if((K-c)%2==0){
    cout<<X<<endl;
  }else{
    cout<<abs(D-X)<<endl;
  }

  


}
