#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int H,W,N;
    cin>>H>>W>>N;

    vector<string>S(H);
    for(int i=0;i<H;i++){
        cin>>S[i];
    }

    vector<int> y(N);
    vector<int> x(N);

    for(int i=0;i<N;i++){
        cin>>y[i]>>x[i];
    }

    for(int i=0;i<N;i++){
        cout<<S[y[i]][x[i]]<<endl;
    }
}