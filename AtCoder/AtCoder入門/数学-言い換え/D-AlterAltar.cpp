#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  string c;
  cin>>c;


  string d=c;
  long long n=0;
  sort(c.begin(),c.end());
  for(int i=0;i<N;i++){
    if(c[i]!=d[i]){
        n++;
    }
  }
  
 
  if(n%2==0){
    cout<<n/2<<endl;
    return 0;
  }else{
    cout<<n/2+1<<endl;
    return 0;
  }
}
