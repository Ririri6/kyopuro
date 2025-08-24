#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N,M;
   cin>>N>>M;

   vector<string> S(N);
   for(int i=0;i<N;i++){
    cin>>S[i];
   }

   vector<int> A(N,0);
   for(int i=0;i<M;i++){
    int x=0;
    int y=0;
    for(int j=0;j<N;j++){
        if(S[j][i]=='0'){
            x++;
        }else{
            y++;
        }
    }
    if(x==0 || y==0){
        for(int k=0;k<N;k++){
            A[k]++;
        }
    }else if(x<y){
        for(int k=0;k<N;k++){
            if(S[k][i]=='0'){
                A[k]++;
            }
        }
    }else{
        for(int k=0;k<N;k++){
            if(S[k][i]=='1'){
                A[k]++;
            }
        }
    }
   }

   int maxnum=0;
   for(int i=0;i<N;i++){
    maxnum=max(A[i],maxnum);
   }
   for(int i=0;i<N;i++){
    if(A[i]==maxnum){
        cout<<i+1<<" ";
    }
   }
   cout<<endl;


}