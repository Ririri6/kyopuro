#include <bits/stdc++.h>
using namespace std;
 
int main() {
   string S;
   cin>>S;
   
   string ans="";
   for(auto c:S){
     ans+=c;
     if(ans.length()>=3 && ans.substr(ans.size()-3)=="ABC"){
        ans.erase(ans.end()-3,ans.end());
     }
   }

   cout<<ans<<endl;
}