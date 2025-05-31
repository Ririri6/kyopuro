#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int M;
  cin>>M;

  vector<int> D(M);
  for(int i=0;i<M;i++){
    cin>>D[i];
  }

  int y=1;
  for(int i=0;i<M;i++){
    y+=D[i];
  }
  y/=2;
  cout<<y<<endl;
  int sum=0;
  for(int i=0;i<M;i++){
    sum+=D[i];
    cout<<sum<<endl;
    if(sum>=y){
        int a=sum-D[i];
        int b=sum;
        int n=min(abs(y-a),abs(y-b));
        cout<<i+1<<" "<<abs(n-y)<<endl;
        return 0;
    }
  }
}
