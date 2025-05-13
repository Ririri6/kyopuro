#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;

   vector<int> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }
   
   vector<int> B;
   for(int i=0;i<N-1;i++){
    int m=A.size();
    B.clear();
    for(int j=0;j<m-1;j++){
        B.push_back(abs(A[j]-A[j+1]));
    }
    A.clear();
    A=B;
   }

   for(int i=0;i<A.size();i++){
    cout<<A[i]<<" ";
   }
   cout<<endl;
}
