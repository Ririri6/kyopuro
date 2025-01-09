#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
using namespace std;

int main(){
    long long N;
    cin>>N;

    vector<string>S(N);
    for(long long i=0;i<N;i++){
        cin>>S[i];
    }

    set<string>st;
    for(long long i=0;i<N;i++){
        st.insert(S[i]);
    }

    
    


    


}