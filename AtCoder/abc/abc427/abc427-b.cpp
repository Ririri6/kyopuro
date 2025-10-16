#include <bits/stdc++.h>
using namespace std;

int cal(int x){
    int res=0;
    while(true){
        int n=x%10;
        x=x/10;
        res+=n;
        if(x<10){
            res+=x;
            //cout<<res<<endl;
            return res;
        }
    }
}
 
int main() {
   int N;
   cin>>N;

   long long ans=0;
   for(int i=0;i<N;i++){
    if(i==0){
        ans+=1;
    }else{
        ans+=cal(ans);
    }
   }
   cout<<ans<<endl;
}