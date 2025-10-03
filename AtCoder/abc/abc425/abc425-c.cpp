#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,Q;
   cin>>N>>Q;

   deque<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }
   

    vector<long long> S(N+1);
    S[0]=0;
     for(int i=0;i<N;i++){
            S[i+1]=S[i]+A[i];
    }
   
   for(int i=0;i<Q;i++){
    long long n;
    cin>>n;
     long long r_s,l_s;
    if(n==1){
        long long c;
        cin>>c;
       for(int i=0;i<c%N;i++){
         A.push_back(A[0]);
         A.pop_front();
       }
    }if(n==2){
        long long l,r;
        cin>>l>>r;
         for(int i=0;i<N;i++){
            S[i+1]=S[i]+A[i];
        }
        cout<<S[r]-S[l-1]<<endl;
    }
   }
}