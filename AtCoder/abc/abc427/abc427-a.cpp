#include <bits/stdc++.h>
using namespace std;
 
int main() {
   string S;
   cin>>S;
   
   string T="";
   for(int i=0;i<S.length();i++){
    if(i!=S.length()/2){
        T+=S[i];
    }
   }
   cout<<T<<endl;
}