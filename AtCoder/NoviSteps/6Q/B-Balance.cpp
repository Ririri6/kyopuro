#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> W(N);
  for(int i=0;i<N;i++){
    cin>>W[i];
  }
  int min=10000;
  for(int i=1;i<N;i++){
    int s1=0;
    int s2=0;
    for(int j=0;j<i;j++){
      s1+=W[j];
    }

    for(int k=i;k<N;k++){
        s2+=W[k];
    }

    if(min>abs(s1-s2)){
        min=abs(s1-s2);
    }
  }

  cout<<min<<endl;
}

