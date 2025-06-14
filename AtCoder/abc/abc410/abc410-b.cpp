#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,Q;
  cin>>N>>Q;

  vector<int> X(Q);
  for(int i=0;i<Q;i++){
    cin>>X[i];
  }

  map<int,int> ans;
  vector<int> A(Q);
  for(int i=0;i<N;i++){
    ans[i+1]=0;
  }
  for(int i=0;i<Q;i++){
    A[i]=0;
  }

  for(int i=0;i<Q;i++){
    if(X[i]>=1){
        ans[X[i]]++;
        A[i]=X[i];
    }else if(X[i]==0){ 
        int min=100;
        int num;
        for(auto a:ans){
            if(a.second<min){
                min=a.second;
                num=a.first;
            }
        }
        
        ans[num]++;
        A[i]=num;
    }
  }

  for(int i=0;i<Q;i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;
}
