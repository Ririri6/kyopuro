#include <bits/stdc++.h>
using namespace std;
 
vector<int> sum(10);

int rec(int n){
    sum[n-1]++;
    if(n==1 || n==2){
        return 1;
    }else{
        return rec(n-2)+rec(n-1);
    }
}
int main() {
  

  int result=rec(10);
  
  for(int i=0;i<10;i++){
    cout<<sum[i]<<endl;
  }

  
}
