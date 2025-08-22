#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;

   vector<int> C(N);
   vector<int> P(N);
   for(int i=0;i<N;i++){
    cin>>C[i]>>P[i];
   }

   long long Q;
   cin>>Q;
   
   vector<long long> L(Q);
   vector<long long> R(Q);
   for(int i=0;i<Q;i++){
    cin>>L[i]>>R[i];
   }

   vector<long long> Sum_1(N+1);
   vector<long long> Sum_2(N+1);
   Sum_1[0]=0;
   Sum_2[0]=0;
   for(int i=0;i<N;i++){
    if(C[i]==1){
        Sum_1[i+1]=Sum_1[i]+P[i];
        Sum_2[i+1]=Sum_2[i];
    }else{
        Sum_1[i+1]=Sum_1[i];
        Sum_2[i+1]=Sum_2[i]+P[i];
    }
   }

   for(int i=0;i<Q;i++){
    cout<<Sum_1[R[i]]-Sum_1[L[i]-1]<<" "<<Sum_2[R[i]]-Sum_2[L[i]-1]<<endl;
   }
}
