#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N,M;
    cin>>N>>M;

    string S,T;
    cin>>S>>T;

    vector<long long> diff(N+2,0);

    for (int i=0;i<M;i++) {
        long long L,R;
        cin>>L>>R;
        diff[L-1]^=1;  
        diff[R]^=1;  
    }

    int flag=0;
    for (int i=0;i<N;i++) {
        flag^=diff[i];
        if (flag){
             swap(S[i],T[i]); 
        }
    }

    cout<<S<<endl;
}
