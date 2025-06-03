#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  int M;
  cin>>N>>M;

  long long X=0;
  for(int i=0;i<=M;i++){
    X+=pow(N,i);
    if(X>1000000000){
        cout<<"inf"<<endl;
        return 0;
    }
  }

  cout<<X<<endl;
}

  
