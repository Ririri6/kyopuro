#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int>A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  double result=0.0;
  int num=0;

  for(int i=0;i<N;i++){
    if(A[i]!=0){
        result+=A[i];
        num++;
    }
  }

  result=result/num;

  result=ceil(result);

  cout<<result<<endl;
}
