#include <bits/stdc++.h>
using namespace std;
 
int main() {
   string S;
   cin>>S;
   
   for(int i=0;i<S.length();i++){
      for(int j=i;j<S.length();j++){
        string M=S;
        M.erase(i,j-i);
        //cout<<M<<endl;
        if(M=="keyence"){
            cout<<"YES"<<endl;
            return 0;
        }
      }
   }

   cout<<"NO"<<endl;

}
