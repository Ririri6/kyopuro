#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin>>N>>K;

  vector<double> p(N);
  for(int i=0;i<N;i++){
    cin>>p[i];
  }

  vector<double> S(N+1);
  S[0]=0.0;
  for(int i=0;i<N;i++){
    double sum=0.0;
    for(int j=1;j<=p[i];j++){
        sum+=j;
    }
    double num=sum/p[i];
    S[i+1]=S[i]+num;
  }

  
  double M=0.0;

  for(int i=0;i<N;i++){
      double n=S[i+K]-S[i];
      
      if(n>M){
        M=n;
      }
  }
  cout<<fixed<<setprecision(12)<<M<<endl;
}
