#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<string>S(N);
  vector<int>T(N);

  for(int i=0;i<N;i++){
    cin>>S[i]>>T[i];
  }

  int max=1;

  for(int i=0;i<N;i++){
    if(T[i]>max){
        max=T[i];
    }
  }

  int m=1;
  string result;

  for(int i=0;i<N;i++){
    if(T[i]<max){
        if(T[i]>m){
            m=T[i];
            result=S[i];
        }
    }
  }

  cout<<result<<endl;
}
