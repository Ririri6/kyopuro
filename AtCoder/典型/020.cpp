#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long a,b,c;
   cin>>a>>b>>c;

   long long l=a;
   long long r=1;
   for(int i=0;i<b;i++){
    r*=c;
    if(r>l){
        cout<<"Yes"<<endl;
        return 0;
    }
   }
   
    cout<<"No"<<endl;
   
}