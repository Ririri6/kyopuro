#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N,M;
   cin>>N>>M;

   vector<long long> a(N);
   vector<long long> b(N);
   for(int i=0;i<N;i++){
    cin>>a[i]>>b[i];
   }

   vector<long long> c(M);
   vector<long long> d(M);
   for(int i=0;i<M;i++){
    cin>>c[i]>>d[i];
   }

   for(int i=0;i<N;i++){
    long long ans=2*1000000000;
    long long num=0;
    for(int j=0;j<M;j++){
        long long h=abs(a[i]-c[j])+abs(b[i]-d[j]);
        if(ans>h){
            ans=h;
            num=j+1;
        }
    }
    cout<<num<<endl;
   }
}