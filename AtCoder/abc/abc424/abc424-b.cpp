#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N,M,K;
   cin>>N>>M>>K;
   vector<int> A(K);
   vector<int> B(K);
   for(int i=0;i<K;i++){
    cin>>A[i]>>B[i];
   }
   map<int,int> P;
   for(int i=0;i<K;i++){
    P[A[i]]+=1;
    if(P[A[i]]==M){
        cout<<A[i]<<" ";
    }
   }
   cout<<endl;
   
}