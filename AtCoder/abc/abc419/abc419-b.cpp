#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int Q;
   cin>>Q;

   vector<int> A;

   for(int i=0;i<Q;i++){
     int num;
     cin>>num;
     if(num==1){
        int x;
        cin>>x;
        A.push_back(x);
     }else{
        sort(A.begin(),A.end());
        cout<<A.front()<<endl;
        A.erase(A.begin());
     }

   }
}
