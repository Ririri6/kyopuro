#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N,M;
   cin>>N>>M;

   vector<int> C(M);
   vector<vector<int>> a(10, vector<int>(10));
   for(int i=0;i<M;i++){
      cin>>C[i];
      for(int j=0;j<C[i];j++){
         cin>>a[i][j];
      }
   }
  
  int ans=0;
  for(int bit=0;bit<1<<M;bit++){
   set<int> A;
   for(int i=0;i<M;i++){
      for(int j=0;j<C[i];j++){
         if(bit &(1<<i)){
            A.insert(a[i][j]);
         }
      }
   }
   if(A.size()==N){
      ans++;
   }
   A.clear();
  }

  cout<<ans<<endl;

}