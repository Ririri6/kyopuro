#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long n;
   cin>>n;

   vector<long long> a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   deque<long long> b;
   if(n%2==0){
   for(int i=0;i<n;i++){
     if((i+1)%2==0){
        b.push_front(a[i]);
     }else{
        b.push_back(a[i]);
     }
    
   }    
   }else{
       for(int i=0;i<n;i++){
     if((i+1)%2==1){
        b.push_front(a[i]);
     }else{
        b.push_back(a[i]);
     }
    
   }
   }


   for(auto b_n:b){
    cout<<b_n<<" ";
   }
   cout<<endl;
}