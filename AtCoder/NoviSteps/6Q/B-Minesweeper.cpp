#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int H,W;
  cin>>H>>W;

  vector<string> S(H);
  for(int i=0;i<H;i++){
    cin>>S[i];
  }
  
  vector<string> T=S;
  for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        int num=0;
        if(S[i][j]=='.'){
            if(i-1>=0 && S[i-1][j]=='#'){
                num++;
            }
            if(i+1<H && S[i+1][j]=='#'){
                num++;
            }
            if(j-1>=0 && S[i][j-1]=='#'){
                num++;
            }
            if(j+1<W && S[i][j+1]=='#'){
                num++;
            }
            if(i-1>=0 && j-1>=0 && S[i-1][j-1]=='#'){
                num++;
            }
            if(i-1>=0 && j+1<W && S[i-1][j+1]=='#'){
                num++;
            }
            if(i+1<H && j-1>=0 && S[i+1][j-1]=='#'){
                num++;
            }
            if(i+1<H && j+1<W && S[i+1][j+1]=='#'){
                num++;
            }

            T[i][j]=num+'0';
        }
    }
  }

  for(int i=0;i<H;i++){
    cout<<T[i]<<endl;
  }
}
