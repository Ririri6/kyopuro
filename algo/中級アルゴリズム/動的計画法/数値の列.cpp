#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N,X,Y;
   cin>>N>>X>>Y;

   for(int i=0;i<N-2;i++){
     int tmp=X;
     X=Y;
     Y=(tmp+X)%100;
   }
   cout<<Y<<endl;
}