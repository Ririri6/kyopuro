#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int H,W;
   cin>>H>>W;

   vector<string> S(H);
   for(int i=0;i<H;i++){
    cin>>S[i];
   }
   
   set<int> x;
   set<int> y;
   int ans_x,ans_y;
   int flag=0;
   for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
      if(S[i][j]=='#'){
         x.insert(i+1);
         y.insert(j+1);
      }
    }
   }

   for(auto x_n:x){
    for(auto y_n:y){
        if(S[x_n-1][y_n-1]=='.'){
            cout<<x_n<<" "<<y_n<<endl;
            return 0;
        }
    }
   }
}