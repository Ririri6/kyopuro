#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,K;
   cin>>N>>K;
   
   map<long long,long long> M;
   deque<long long> w;
   long long T=0;//総合時間
   long long num=0;
   long long time=0;//入店時間
   vector<long long> A(N);
   vector<long long> B(N);
   vector<long long> C(N);
   for(int i=0;i<N;i++){
    cin>>A[i]>>B[i]>>C[i];
    w.push_back(C[i]);
   }
   
}