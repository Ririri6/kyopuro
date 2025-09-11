#include <bits/stdc++.h>
using namespace std;

//素因数を配列に詰めたタイプ
template<class T>
vector<T>prime_factorization2(T N){
    vector<T> ans;
    T X=N;
    for(T i=2;i*i<=N;i++){
        if(X%i!=0)continue;
        if(X==1)break;
        while(X%i==0){
            ans.push_back(i);
            X/=i;
        }
    }
    if(X!=1)ans.push_back(X);
    return ans;
}

int main() {
   long long x;
   cin>>x;
   
   long long ans=0;
   vector<long long> A;
   A=prime_factorization2(x);
   if(A.size()==1){
    cout<<0<<endl;
    return 0;
   }
   
   long long num=A.size();
   
   while ((1LL << ans) < num){
    ans++;
   } 
   
    cout << ans << endl;
    return 0;
}