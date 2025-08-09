#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  
  if(N%2==1){
    return 0;
  }

  string S="";
  for(int i=0;i<N/2;i++){
    S+="()";
  }
  set<string> A;
  do{
       A.insert(S);
  }while(next_permutation(S.begin(),S.end()));

  for(auto a:A){
    cout<<a<<endl;
  }
  
}
