#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  string S="";
  
  long long num=N;
  
  while(num!=0){
    if(num%2==0){
        S='B'+S;
        num=num/2;
    }else{
        S='A'+S;
        num--;
    }
  }

  cout<<S<<endl;

}
