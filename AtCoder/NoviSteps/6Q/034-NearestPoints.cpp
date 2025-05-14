#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> x(N);
  vector<long long> y(N);
  for(int i=0;i<N;i++){
    cin>>x[i]>>y[i];
  }


  double min=10000000;

  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
        double d=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
        if(d<min){
            min=d;
        }
    }
  }

  cout<<fixed << setprecision(28) <<min<<endl;

}
