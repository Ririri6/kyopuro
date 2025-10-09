#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N;
   cin>>N;

   set<string> S;
   for(int i=0;i<N;i++){
    string s;
    cin>>s;
    string t=s;
    reverse(t.begin(),t.end());
    S.insert(min(t,s));
   }

   long long ans=S.size();
   
   
   cout<<ans<<endl;

}