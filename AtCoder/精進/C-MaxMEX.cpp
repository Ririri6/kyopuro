#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,K;
   cin>>N>>K;

   set<long long> A;
   for(int i=0;i<N;i++){
    long long a;
    cin>>a;
    A.insert(a);
   }

   vector<long long> C;
   for(auto a:A){
    C.push_back(a);
   }

   if(C[0]!=0){
    cout<<0<<endl;
    return 0;
   }else{
    
    long long num=C.size();
    for(int i=0;i<min(num,K);i++){
        if(C[i]!=i){
            cout<<i<<endl;
            return 0;
        }
    }
    if(num<K){
        cout<<num<<endl;
        return 0;
    }
   }

   cout<<K<<endl;
}