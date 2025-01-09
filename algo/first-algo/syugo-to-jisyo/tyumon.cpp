#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    
    map<string,int>manyu;
    string F;
    int C;

    for(int i=0;i<N;i++){
        cin>>F>>C;
        manyu.insert({F,C});
    }

    vector<string>X(M);
    for(int i=0;i<M;i++){
        cin>>X[i];
    }
    
    int result=0;
    for(int i=0;i<M;i++){
        result+=manyu[X[i]];
    }

    cout<<result<<endl;

}