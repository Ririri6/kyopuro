#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main(){
    int H,W;
    cin>>H>>W;

    vector<string>S(H);
    
    for(int i=0;i<H;i++){
        cin>>S[i];
    }

    

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(i==0){
                if(S[i+1][j]=='#'){
                    cout<<i<<" "<<j<<endl;
                }
            }else if(i==W-1){
                if(S[i-1][j]=='#'){
                    cout<<i<<" "<<j<<endl;
                }
            }else{
                if(S[i+1][j]=='#' && S[i-1][j]=='#'){
                    cout<<i<<" "<<j<<endl;
                }
            }
        }
    }

}