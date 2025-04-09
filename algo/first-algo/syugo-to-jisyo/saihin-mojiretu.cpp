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

    map<string,int>m;

    

    for (int i = 0; i < N; i++) {
        m[S[i]]++;
    }


    int max=0;
    string result;
    for(auto& x:m){
        
        if(x.second>max){
             max=x.second;
             result=x.first;
        }
    }
    
    cout<< result <<endl;

}