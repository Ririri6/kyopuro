#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int M;
  cin>>M;

  vector<int> D(M);
  int sum=0;

  for(int i=0;i<M;i++){
    cin>>D[i];
    sum+=D[i];
  }


  
    int a=0;
    int j=0;
    while(a<(sum/2)+1){
       a+=D[j];
       j++;
    }
    
    if(a==(sum/2)+1){
      cout<<j<<" "<<D[j-1]<<endl;
      return 0;
    }else{
      cout<<j<<" "<<((sum/2)+1)-(a-D[j-1])<<endl;
      return 0;
    }
  
  
  
  
}
