#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;
   string S;
   cin>>S;


   vector<int> A_point;
   for(int i=0;i<N*2;i++){
    if(S[i]=='A'){
        A_point.push_back(i);
    }
   }

  long long ansA=0;
  long long ansB=0;
  for(int i=0;i<N;i++){
    ansA+=abs(A_point[i]-2*i);
    ansB+=abs(A_point[i]-(2*i+1));
  }
    
   cout<<min(ansA,ansB)<<endl;
}
