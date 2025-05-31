#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  long long sum=0;
  long long m=1;
  while(true){
    sum+=m;
    if(sum>=N){
        cout<<m<<endl;
        return 0;
    }
    m++;
  }

}
