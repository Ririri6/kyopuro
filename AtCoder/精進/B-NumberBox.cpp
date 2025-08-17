#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;

   vector<string> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }

   vector<vector<long long>> C(N, vector<long long>(N));
   for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        C[i][j]=A[i][j]-'0';
    }
   }
   
   long long ans=0;
   vector<int> p={1,1,1,0,0,-1,-1,-1},q={1,0,-1,1,-1,1,0,-1};
   for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        for(int k=0;k<8;k++){
            long long now=0;
            long long x=i,y=j;
            for(int l=0;l<N;l++){
                now*=10;
                now+=C[x][y];
                x+=p[k];
                y+=q[k];
                x%=N;
                x+=N;
                y%=N;
                y+=N;
                x%=N;
                y%=N;
            }
            ans=max(ans,now);
        }
    }
   }

   cout<<ans<<endl;

}
