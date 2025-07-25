#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int s;
  cin>>s;

  map<int,int> a;
  a[s]=1;
  int num=1;
  while(true){
    num++;
    if(s%2==0){
      s=s/2;
    }else{
      s=3*s+1;
    }
    a[s]++;
    if(a[s]>=2){
       cout<<num<<endl;
       return 0;
    } 
    
  }
}
