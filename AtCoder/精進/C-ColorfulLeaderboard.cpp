#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;
   vector<int> a(N);
   for(int i=0;i<N;i++){
    cin>>a[i];
   }

   set<int> R;
   int num=0;
   for(int i=0;i<N;i++){
    if(a[i]<=399){
        R.insert(0);
    }else if(a[i]<=799){
        R.insert(1);
    }else if(a[i]<=1199){
        R.insert(2);
    }else if(a[i]<=1599){
        R.insert(3);
    }else if(a[i]<=1999){
        R.insert(4);
    }else if(a[i]<=2399){
        R.insert(5);
    }else if(a[i]<=2799){
        R.insert(6);
    }else if(a[i]<=3199){
        R.insert(7);
    }else{
        num++;
    }
   }


   int ans_max=R.size()+num;
   int ans_min=R.size();
   if(ans_min==0){
    ans_min=1;
   }
  
    cout<<ans_min<<" "<<ans_max<<endl;
   
}