#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> x(N);
  vector<int> y(N);
  for(int i=0;i<N;i++){
    cin>>x[i]>>y[i];
  }

  double max=0.0;

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
       double ans=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
       if(ans>max){
        max=ans;
       }
    }
  }

  //小数出力の桁数指定
  cout << fixed << setprecision(10) << max << endl;
}
