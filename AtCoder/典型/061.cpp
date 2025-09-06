#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long Q;
   cin>>Q;
   
   deque<long long> yamahuda;
   for(int i=0;i<Q;i++){
    int t;
    cin>>t;
    long long x;
    cin>>x;
    if(t==1){
        yamahuda.push_front(x);
    }else if(t==2){
        yamahuda.push_back(x);
    }else if(t==3){
        cout<<yamahuda.at(x-1)<<endl;
    }
   }
}
