#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int H,W;
   cin>>H>>W;
   vector<string> S(H);
   for(int i=0;i<H;i++){
    cin>>S[i];
   }

   for(int i=1;i<H-1;i++){
    for(int j=1;j<W-1;j++){
        if(S[i][j]=='#'){
            int count=0;
            if(S[i-1][j]=='#'){
                count++;
            }
            if(S[i+1][j]=='#'){
                count++;
            }
            if(S[i][j-1]=='#'){
                count++;
            }
            if(S[i][j+1]=='#'){
                count++;
            }

            if(count==0 || count==3){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
   }
    for(int j=1;j<W-1;j++){
    if(S[0][j]=='#'){
        int count=0;
        if(S[0][j+1]=='#'){
            count++;
        }
        if(S[0][j-1]=='#'){
            count++;
        }
        if(S[1][j]=='#'){
            count++;
        }
        if(count==0 ||count==3){
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(S[H-1][j]=='#'){
        
        int count=0;
        if(S[H-1][j+1]=='#'){
            count++;
          }
        if(S[H-1][j-1]=='#'){
            count++;
        }
        if(S[H-2][j]=='#'){
            count++;
        }
        if(count==0 ||count==3){
            cout<<"No"<<endl;
            return 0;
        }
    }
    }
   
for(int i=1;i<H-1;i++){
    if(S[i][0]=='#'){
        int count=0;
        if(S[i+1][0]=='#'){
            count++;
        }
        if(S[i-1][0]=='#'){
            count++;
        }
        if(S[i][1]=='#'){
            count++;
        }
        if(count==0 ||count==3){
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(S[i][W-1]=='#'){
        int count=0;
          if(S[i+1][W-1]=='#'){
            count++;
          }
        if(S[i-1][W-1]=='#'){
            count++;
        }
        if(S[i][W-2]=='#'){
            count++;
        }
        if(count==0 ||count==3){
            cout<<"No"<<endl;
            return 0;
        }
    }
    }
   
   if(S[0][0]=='#'){
    if(H==1 || W==1){
        cout<<"No"<<endl;
        return 0;
    }
     if(!(S[1][0]=='#' && S[0][1]=='#')){
        cout<<"No"<<endl;
        return 0;
     }
   }
   if(S[0][W-1]=='#'){
    if(!(S[0][W-2]=='#' && S[1][W-1]=='#')){
        cout<<"No"<<endl;
        return 0;
    }
   }
   if(S[H-1][0]=='#'){
    if(!(S[H-1][1]=='#' && S[H-2][0]=='#')){
        cout<<"No"<<endl;
        return 0;
    }
   }
   if(S[H-1][W-1]=='#'){
    if(!(S[H-1][W-2]=='#' && S[H-2][W-1]=='#')){
        cout<<"No"<<endl;
        return 0;
    }
   }


   cout<<"Yes"<<endl;


}
