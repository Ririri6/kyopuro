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

  vector<int> P(N,0);
  
  int current=0;
  P[0]=1;
  cout<<1<<endl;
  for(int j=1;j<N;j++){
    long long min=200000000;
    int next;
    for(int i=0;i<N;i++){
        long long d=(X[current]-X[i])*(X[current]-X[i])+(Y[current]-Y[i])*(Y[current]-Y[i]);
        if(d<min){
            if(P[i]==0){
               next=i;
               min=d;
            }
            
        }
    }
    P[next]=1;
    cout<<next+1<<endl;
    current=next;
    
  }
  cout<<1<<endl;
}
