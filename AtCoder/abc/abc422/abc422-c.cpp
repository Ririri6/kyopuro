#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long T;
   cin>>T;
   for(int i=0;i<T;i++){
    long long a,b,c;
    cin>>a>>b>>c;
    //cout<<"ans"<<endl;
    cout<<min(min(a,c),(a+b+c)/3)<<endl;
   }
}
