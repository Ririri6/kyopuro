#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  vector<string> S(N);
  for(int i=0;i<N;i++){
    cin>>S[i];
  } 
  
  int M=0;
  //横
  for(int i=0;i<N;i++){
    int u=1;
    int d=1;
    for(int j=0;j<N-1;j++){
        if((S[i][j]-'0')-(S[i][j+1]-'0')==1){
            d++;
        }else if((S[i][j+1]-'0')-(S[i][j]-'0')==1){
            u++;
        }else{
            M=max(M,max(u,d));
            d=1;
            u=1;
        }
        
        
    }
    
  }
  //縦
  for(int i=0;i<N;i++){
    int u=1;
    int d=1;
    for(int j=0;j<N-1;j++){
        if((S[j][i]-'0')-(S[j+1][i]-'0')==1){
            d++;
        }else if((S[j+1][i]-'0')-(S[j][i]-'0')==1){
            u++;
        }else{
            M=max(M,max(u,d));
            d=1;
            u=1;
        }
        //cout<<j<<"行"<<i<<"列目："<<"u:"<<u<<" d:"<<d<<endl;
       
    }
    
  }

  //斜め
  
   for(int i=0;i<N;i++){
    int u=1;
    int d=1;
    for(int j=0;j<N;j++){
        for(int k=0;k<N;k++){
           if((i+k+1)<N && (j+k+1)<N && (S[i+k][j+k]-'0')-(S[i+k+1][j+k+1]-'0')==1){
             d++;
           }else if((i+k+1)<N && (j+k+1)<N &&(S[i+k+1][j+k+1]-'0')-(S[i+k][j+k]-'0')==1){
             u++;
           }else{
             M=max(M,max(u,d));
             d=1;
             u=1;
           }
        }
        
        
    }
        
    
  }


  cout<<M<<endl;
}
