#include <bits/stdc++.h>
using namespace std;

int func(int x){
    if(x==0){
        return 0;
    }else if(x==1){
        return 1;
    }else{
        int F1=func(x-1);
        int F2=func(x-2);
        return F1+F2;
    }
}
 
int main() {
  int N;
  cin>>N;
   
  int ans=func(N);

  cout<<ans<<endl;


}
