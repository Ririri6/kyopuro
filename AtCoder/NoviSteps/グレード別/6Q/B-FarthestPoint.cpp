#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  vector<int> X(N);
  vector<int> Y(N);
  for(int i=0;i<N;i++){
      cin>>X[i]>>Y[i];
  }

  
  for(int i=0;i<N;i++){
    int max=0;
    int ans=0;
    for(int j=0;j<N;j++){
        int d=(X[i]-X[j])*(X[i]-X[j])+(Y[i]-Y[j])*(Y[i]-Y[j]);
        if(d>max){
            max=d;
            ans=j+1;
        }
    }

    cout<<ans<<endl;
  }

 


}
