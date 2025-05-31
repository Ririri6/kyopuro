#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin>>S;

    long long K;
    cin>>K;

    string T="";
    for(int i=1;i<=K;i++){
        T+=S;
    }


    vector<long long> M;

    for(long long i=0;i<T.length();){
        long long j=i;
        long long num=0;
        
        while(true){
            if(T[j]!=T[i]){
                M.push_back(num);
                break;
                
            }else{
                num++;
            }
            j++;
        }
        i=j;
    }

    int ans=0;
    for(long long i=0;i<M.size();i++){
        ans+=(M[i]/2);
    }

    cout<<ans<<endl;

}
