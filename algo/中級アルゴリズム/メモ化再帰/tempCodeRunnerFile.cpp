#include <bits/stdc++.h>
using namespace std;

long long func(vector<long long> F,int x){
     if(F[x]!=-1){
        return F[x];
     }
     else {
        int F1=func(F,x-1);
        int F2=func(F,x-2);

        F[x]=F1+F2;

        return F[x];

     }
}
 
int main() {
  int N;
  cin>>N;

  vector<long long> fib(N+1);
  for(int i=0;i<N+1;i++){
    fib[i]=-1;
  }

  fib[0]=0;
  fib[1]=1;

    
    int ans=func(fib,N);
    cout<<ans<<endl;
  


}
