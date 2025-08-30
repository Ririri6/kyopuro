#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;
   vector<string> S(N);
   for(int i=0;i<N;i++){
    cin>>S[i];
   } 
   int X;
   cin>>X;
   string Y;
   cin>>Y;

   if(S[X-1]==Y){
    cout<<"Yes"<<endl;
   }else{
    cout<<"No"<<endl;
   }
}
