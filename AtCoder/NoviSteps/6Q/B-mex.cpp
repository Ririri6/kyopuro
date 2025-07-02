#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  set<int> A;
  for(int i=0;i<N;i++){
    int a;
    cin>>a;
    A.insert(a);
  }

  for(int i=0;i<=N;i++){
    int flag=0;
    for(auto c:A){
        if(c==i){
            flag=1;
        }
    }
    if(flag==0){
        cout<<i<<endl;
        return 0;
    }
  }

  

 
}
