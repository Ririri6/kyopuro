#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int H,W;
   cin>>H>>W;

   vector<string> C(H);
   for(int i=0;i<H;i++){
    cin>>C[i];
   }

   int N=min(H,W);
   
   map<int,int> M;
   for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
       if(C[i][j]=='#'){
        if((i+1<H && j+1<W && i-1>=0 && j-1>=0 &&
                C[i+1][j+1]=='#' &&C[i-1][j-1]=='#' && C
                [i-1][j+1]=='#'&& C[i+1][j-1]=='#')){
           int num=1;
           //cout<<"i:"<<i<<"j:"<<j<<endl;
           for(int k=2;k<=N;k++){
            if((i+k<H && j+k<W && i-k>=0 && j-k>=0 &&
                C[i+k][j+k]=='#' &&C[i-k][j-k]=='#' && C
                [i-k][j+k]=='#'&&C[i+k][j-k]=='#')){
                    //cout<<"i:"<<i<<"j:"<<j<<"k:"<<k<<endl;                    
                    num++;                  
                }else{
                    break;
                }
        }
            M[num]++;
        }
       
        
       
       }
    }
   }

   for(int i=1;i<=N;i++){
    if(M.count(i)){
        cout<<M[i]<<" ";
    }else{
        cout<<0<<" ";
    }
   }
   cout<<endl;
}