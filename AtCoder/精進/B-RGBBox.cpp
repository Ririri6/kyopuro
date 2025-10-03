#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int R,G,B,N;
   cin>>R>>G>>B>>N;
   
   int ans=0;
   for(int i=0;i<=N/R;i++){
    for(int j=0;j<=N/G;j++){
        int k=N-R*i-G*j;
        //cout<<i<<" "<<j<<" "<<k<<endl;
        if(k%B==0 && k/B>=0){
            ans++;
        }
    }
   }
   cout<<ans<<endl;
}