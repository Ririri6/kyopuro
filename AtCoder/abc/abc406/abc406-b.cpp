#include <bits/stdc++.h>
using namespace std;

int main(){
int N, K;
    cin >> N >> K;

    vector<long long> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    long long ans = 1;
    double log_a=0.0;

    for (int i = 0; i < N; i++)
    {   
  
        double tmp=log_a+log10(A[i]);
    
        if(tmp>=K){
        if(tmp>=K){
            ans=1;
            log_a=0.0;
        }else{
            ans*=A[i];
            log_a=tmp;
        }
    }

    cout<<ans<<endl;
}
    

