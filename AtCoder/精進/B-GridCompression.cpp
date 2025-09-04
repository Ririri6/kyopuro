#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int H,W;
   cin>>H>>W;

   vector<string> a(H);
   for(int i=0;i<H;i++){
    cin>>a[i];
   }
   
  
   string c="";
  
   for(int j=0;j<W;j++){
    c+='.';
   }

   for(int i=0;i<a.size();){
    if(a[i]==c){
       a.erase(a.begin()+i);
    }else{
        i++;
    }
   }
   
   for(int i=0;i<W;){
     int num=0;
     for(int j=0;j<a.size();j++){
          if(a[j][i]=='.'){
            num++;
          }
     }
     if(num==a.size()){
        for(int k=0;k<a.size();k++){
            a[k].erase(a[k].begin()+i);
        }
     }else{
        i++;
     }
   }
   for(int i=0;i<a.size();i++){
    cout<<a[i]<<endl;
   }
   

   


}