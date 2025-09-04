#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,P,Q;
   cin>>N>>P>>Q;
   vector<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }
   vector<long long> b(N);
   for(int i=0;i<N;i++){
    b[i]=A[i]%P;
   }
   
   long long ans=0;
   for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
        for(int k=j+1;k<N;k++){
            for(int l=k+1;l<N;l++){
                for(int m=l+1;m<N;m++){
                   long long num=1;
                   num = (num * b[i]) % P;
                   num = (num * b[j]) % P;
                   num = (num * b[k]) % P;
                   num = (num * b[l]) % P;
                   num = (num * b[m]) % P;
                   if(num%P==Q){
                    ans++;
                   }
                }
            }
        }
    }
   }

   cout<<ans<<endl;
   
}