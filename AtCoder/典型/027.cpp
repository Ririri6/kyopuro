#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;
   vector<string> S(N);
   for(int i=0;i<N;i++){
    cin>>S[i];
   }

   set<string> T;

   for(int i=0;i<N;i++){
    long long num=T.size();
    T.insert(S[i]);
    if(T.size()>num){
        cout<<i+1<<endl;
    }
   }

   
}