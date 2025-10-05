#include <bits/stdc++.h>
using namespace std;
 
int main() {
   string S;
   cin>>S;

   map<char,int> M;
   for(int i=0;i<S.length();i++){
    M[S[i]]++;
   }

   for(auto m:M){
    if(m.second==1){
        cout<<m.first<<endl;
        return 0;
    }
   }
}