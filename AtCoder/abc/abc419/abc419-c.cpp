#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;
   vector<long long> R(N);
   vector<long long> C(N);
   
   for(int i=0;i<N;i++){
    cin>>R[i]>>C[i];
   }

    long long R_min=R[0];
    long long R_max=R[0];

    for (int i=1;i<N;i++) {
        if(R[i]<R_min){
            R_min=R[i];
        }
        if(R[i]>R_max){
            R_max=R[i];
        }
    }

    long long C_min=C[0];
    long long C_max=C[0];

    for (int i=1;i<N;i++) {
        if(C[i]<C_min){
            C_min=C[i];
        }
        if(C[i]>C_max){
            C_max=C[i];
        }
    }

    long long ans=max((R_max-R_min+1)/2,(C_max-C_min+1)/2);
    cout<<ans<<endl;



  

   
}

   
  
