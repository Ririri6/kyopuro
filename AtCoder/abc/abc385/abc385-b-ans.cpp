#include<iostream>
#include<string>
using namespace std;

int main(){
    int H,W,X,Y;
    cin>>H>>W>>X>>Y;

    char S[H][W];

    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            cin>>S[i][j];
        }
    }

    string T;
    cin>>T;
    
    int C=0;
    X--;
    Y--;
    //cout<<S[X][Y]<<endl;
    

    for(size_t i=0;i<T.length();i++){
         if(T[i]=='U' && S[X-1][Y]!='#'){
              X=X-1;
         }
         else if(T[i]=='D' && S[X+1][Y]!='#'){
              X=X+1;
         }
        else if(T[i]=='L' && S[X][Y-1]!='#'){
              Y=Y-1;
         }
        else if(T[i]=='R' && S[X][Y+1]!='#'){
              Y=Y+1;
         }
         
         if(S[X][Y]=='@'){
            C++;
            S[X][Y]='.';
         }

        // cout<<S[X][Y]<<endl;
    }

    cout<<X+1<<" "<<Y+1<<" "<<C<<endl;
}