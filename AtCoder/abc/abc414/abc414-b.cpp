#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int N;
    cin >> N;

    vector<char> c(N);
    vector<long long> l(N);
    long long len = 0;

    for (int i = 0; i < N; i++) {
        cin >> c[i] >> l[i];
        
    }

    string S;
    for(int i=0;i<N;i++){
        for(int j=0;j<l[i];j++){
            S+=c[i];
            if(S.length()>100){
                cout<<"Too Long"<<endl;
                return 0;
            }
        }
    }

    cout<<S<<endl;
}