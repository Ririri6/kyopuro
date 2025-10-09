#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;

  
   vector<long long> A(N);
   long long sum=0;
   for(int i=0;i<N;i++){
    cin>>A[i];
    sum+=A[i];
   }

   long long a=sum/N;
   long long b=sum%N;
   sort(A.begin(),A.end());
   vector<long long> B(N);
   for(int i=0;i<N;i++){
    if(i<b){
        B[i]=a+1;
    }else{
        B[i]=a;
    }
    //B[i]=a+(i<b);
   }
   
   sort(B.begin(),B.end());
   long long ans=0;
  
   
   for(int i=0;i<N;i++){
    ans+=(abs(A[i]-B[i]));
   }
   ans/=2;

   cout<<ans<<endl;
}