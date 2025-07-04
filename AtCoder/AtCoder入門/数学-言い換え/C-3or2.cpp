#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> a(N);
  for(int i=0;i<N;i++){
    cin>>a[i];
  }

  
  
  long long m=0;
  for(int i=0;i<N;i++){
    if(a[i]%2==0){
       while(a[i]>1 && a[i]%2==0){
        a[i]=a[i]/2;
        m++;
       }
    }

  }

  cout<<m<<endl;
}
