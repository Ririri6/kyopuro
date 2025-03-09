#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main(){
    int N;
    cin>>N;

    vector<int>P(N);
    vector<int>Q(N);

    for(int i=0;i<N;i++){
        cin>>P[i];
    }

    for(int i=0;i<N;i++){
        cin>>Q[i];
    }

    map<int,int>a;

    vector<int>result(N);
    for(int i=0;i<N;i++){
        a[Q[i]]=Q[P[i]-1];
    
    }

    int size=a.size();

    for(auto const &pair:a){
        
        cout<<pair.second<<" ";
    }

    cout<<endl;
}