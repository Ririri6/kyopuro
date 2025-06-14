#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,Q;
  cin>>N>>Q;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    A[i]=i+1;
  }
  
  long long s=0;
  for(int i=0;i<Q;i++){
    long long n;
    
    cin>>n;
    if(n==1){
        long long p;
        cin>>p;
        p--;
        long long  x;
        cin>>x;
        
        A[(p+s)%N]=x;
    }else if(n==2){
        long long  p;
        cin>>p;
        p--;
        cout<<A[(p+s)%N]<<endl;
    }else if(n==3){
        long long k;
        cin>>k;
        
        s=(s+k)%N;
    }
  }

}
