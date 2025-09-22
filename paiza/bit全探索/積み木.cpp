#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;
   vector<int> h(N);
   vector<int> w(N);
   vector<int> d(N);
   vector<int> s(N);
   for(int i=0;i<N;i++){
    cin>>h[i]>>w[i]>>d[i];
    s[i]=w[i]*d[i];
   }
   
   vector<pair<long long, int>> M(N); 
   for(int i=0;i<N;i++){
    M.at(i)=make_pair(s[i],i);
   }
    
   long long ans=0;
   long long t=10000;
   long long y=10000;
   long long ph=10000;
   long long pt = 10000; 
    long long py = 10000; 
   sort(M.rbegin(),M.rend());
   for(int i=0;i<N;i++){
     if(w[M.at(i).second]<=y && d[M.at(i).second]<=t){
        ans+=h[M.at(i).second];
        py=y;
        pt=t;
        y=w[M.at(i).second];
        t=d[M.at(i).second];
        ph=h[M.at(i).second];
        
     }else if((w[M.at(i).second]<=t && d[M.at(i).second]<=y)){
        ans+=h[M.at(i).second];
        py=t;
        pt=y;
        t=w[M.at(i).second];
        y=d[M.at(i).second];
        ph=h[M.at(i).second];
        
     }else if(h[M.at(i).second]>ph ){
        if((w[M.at(i).second]<=pt && d[M.at(i).second]<=py)||(w[M.at(i).second]<=py && d[M.at(i).second]<=pt)){
        ans-=ph;
        ans+=h[M.at(i).second];
        ph=h[M.at(i).second];
        t=w[M.at(i).second];
        y=d[M.at(i).second];
        } 
     }
   }
   cout<<ans<<endl;
}