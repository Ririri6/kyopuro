#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,M;
  cin>>N>>M;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  vector<long long> B(M);
  for(int i=0;i<M;i++){
    cin>>B[i];
  }
  vector<long long> S=A;
  sort(S.begin(),S.end());
  long long num=S[0];

  for(int i=0;i<M;i++){
     int j=0;
     while(true){
        if(B[i]<num){
            cout<<-1<<endl;
            break;
        }
        if(A[j]<=B[i]){
          cout<<j+1<<endl;
          break; 
        }else{
          j++;
        } 


     }
   
   
  
  }
}
