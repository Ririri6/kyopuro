#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,K;
   cin>>N>>K;
   vector<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }
   vector<long long> B(N);
   for(int i=0;i<N;i++){
    cin>>B[i];
   }

   vector<long long> diff(N);
   for(int i=0;i<N;i++){
     diff[i]=abs(B[i]-A[i]);
   }

   for(int i=0;i<N;i++){
    K-=diff[i];
   }

   if(K>=0 && K%2==0 ){
    cout<<"Yes"<<endl;
   }else{
    cout<<"No"<<endl;
   }
   
}