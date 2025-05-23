#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  vector<int> B;

  //単調増加
  for(int i=0;i<N;i++){
    int j=i;
    int num_u=1;
    
    while(true){
        if(A[j]<A[j+1]){
             B.push_back(num_u);
            break;
        }
        j++;
    }
    i=j;
  }

  //単調減少
  for(int i=0;i<N;i++){
    int j=i;
    int num_d=1;

    while(true){
        if(A[j]>A[j+1]){
            B.push_back(num_d);
            break;
        }
        j++;
    }
    i=j;
  }

  cout<<B.size()<<endl;

}
