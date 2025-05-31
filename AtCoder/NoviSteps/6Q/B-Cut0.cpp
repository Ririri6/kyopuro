#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string X;
  cin>>X;

  

  int f=X.length();

  int i=X.length()-3;
  if(X[i+2]=='0'){
    X.pop_back();
    if(X[i+1]=='0'){
        X.pop_back();
        if(X[i]=='0'){
            X.pop_back();
        }
    }
  }

  if(f==X.length()+3){
    X.pop_back();
  }

  cout<<X<<endl;
}
