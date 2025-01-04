#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int H,W;
    cin>>H>>W;

    vector<string>S(H);
    for(int i=0;i<H;i++){
        cin>>S[i];
    }
    
    //Sを探す
    int x=0;
    int y=0;
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(S[i][j]=='S'){
              x=i;
              y=j;
            }
        }
    }

    

    
}