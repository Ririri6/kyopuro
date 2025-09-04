#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int H,W;
   cin>>H>>W;

   vector<string> s(H);
   for(int i=0;i<H;i++){
    cin>>s[i];
   }

   for(int i=1;i<H-1;i++){
    for(int j=1;j<W-1;j++){
        if(s[i][j]=='#'){
            if(s[i-1][j]=='.' && s[i+1][j]=='.' && s[i][j+1]=='.' && s[i][j-1]=='.'){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
   }

   for(int j=1;j<H-1;j++){
    if(s[0][j]=='#'){
        if(s[0][j+1]=='.' && s[0][j-1]=='.' && s[1][j]=='.'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(s[H-1][j]=='#'){
        if(s[H-1][j+1]=='.' && s[H-1][j-1]=='.' && s[H-2][j]=='.'){
            cout<<"No"<<endl;
            return 0;
        }
    }
   }
   for(int i=1;i<H-1;i++){
    if(s[i][0]=='#'){
        if(s[i][1]=='.' && s[i+1][0]=='.' && s[i-1][0]=='.'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    if(s[i][W-1]=='#'){
        if(s[i][W-2]=='.' && s[i+1][W-1]=='.' && s[i-1][W-1]=='.'){
            cout<<"No"<<endl;
            return 0;
        }
    }
   }
   if(s[0][0]=='#'){
    if(s[0][1]=='.' && s[1][0]=='.'){
        cout<<"No"<<endl;
        return 0;
    }
   }
   if(s[0][W-1]=='#'){
    if(s[0][W-2]=='.' && s[1][W-1]=='.'){
        cout<<"No"<<endl;
        return 0;
    }
   }
   if(s[H-1][0]=='#'){
    if(s[H-1][1]=='.' && s[H-2][0]=='.'){
        cout<<"No"<<endl;
        return 0;
    }
   }
   if(s[H-1][W-1]=='#'){
    if(s[H-1][W-2]=='.' && s[H-2][W-1]=='.'){
        cout<<"No"<<endl;
        return 0;
    }
   }

   cout<<"Yes"<<endl;
}
