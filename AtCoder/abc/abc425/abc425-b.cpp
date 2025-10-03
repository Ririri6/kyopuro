#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;

   vector<int> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }
  
   map<int,int> M;
   for(int i=0;i<N;i++){
    M[A[i]]++;
   }
  vector<int> B(N);
  for(auto m:M){
    if(m.first!=-1){
       if(m.second!=1){
        cout<<"No"<<endl;
        return 0;
       }
    }
  }
  for(int i=0;i<N;i++){
    if(A[i]!=-1){
        B[i]=A[i];
    }else{
        for(int j=1;j<=N;j++){
            if(M[j]==0){
                B[i]=j;
                M[j]++;
                break;
            }
        }
        
    }
  }
  cout<<"Yes"<<endl;
  for(int i=0;i<N;i++){
    cout<<B[i]<<" ";
  }
  cout<<endl;

}