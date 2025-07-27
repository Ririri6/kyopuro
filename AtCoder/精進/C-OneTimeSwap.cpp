#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;
  
  string T=S;
  set<string> A;
  long long N=S.length();
  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
        char tmp=T[i];
        T[i]=T[j];
        T[j]=tmp;
        A.insert(T);
        T=S;
    }
  }

  cout<<A.size()<<endl;
}
