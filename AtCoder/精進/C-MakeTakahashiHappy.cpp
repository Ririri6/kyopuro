#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int H,W;
   cin>>H>>W;

   vector<vector<long long>> A(H, vector<long long>(W));

   for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        cin>>A[i][j];
    }
   }

   //すべての移動回数は，下(H)，右(W)の並び方の通り
   //一回の経路でH+W回移動する
   vector<int> D(H+W-2);
   for(int i=0;i<H-1;i++){
     D[i]=0;
   }
   for(int i=H-1;i<H+W-2;i++){
    D[i]=1;
   }
   
   int ans=0;
   int x,y;
   set<long long> B;


   do{
    x=0;
    y=0;
    
    B.insert(A[0][0]);
    for(int k=0;k<H+W-2;k++){
        if(D[k]==0){
          x++;
        }else if(D[k]==1){
          y++;
        }
        //cout<<"(x,y)="<<x<<","<<y<<"A:"<<A[x][y]<<endl;
        B.insert(A[x][y]);
    }
    //cout<<B.size()<<endl;
    if(B.size()==(H+W-1)){
        //cout<<"Yes"<<endl;
        ans++;
    }
    B.clear();
  
    
  }while(next_permutation(D.begin(),D.end()));

  cout<<ans<<endl;
  


}