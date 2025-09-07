#include <bits/stdc++.h>
using namespace std;
 
int main() {
   string S;
   cin>>S;

   int i=S[0]-'0';
   int j=S[2]-'0';
   if(j<8){
    cout<<i<<"-"<<j+1<<endl;
    return 0;
   }else if(i<8 && j==8){
    cout<<i+1<<"-"<<1<<endl;
    return 0;
   }else if(i==8 && j==8){
    return 0;
   }
}
