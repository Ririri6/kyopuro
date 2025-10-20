#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,X;
   cin>>N>>X;

   set<long long> A;
   for(int i=0;i<N;i++){
    long long a;
    cin>>a;
    A.insert(a);
   }

   long long num=A.size();
   for(auto a:A){
     long long b=a-X;
     A.insert(b);
     if(num==A.size()){
        cout<<"Yes"<<endl;
        return 0;
     }
     A.erase(b);
   }

   

   cout<<"No"<<endl;


}