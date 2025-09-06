#include <bits/stdc++.h>
using namespace std;
 
int main() {
   string N;
   long long K;
   cin>>N>>K;
   
   for(int i=0;i<K;i++){
      long long num=0;
      string S=N;
      //10進数に変換
      for(int j=0;j<S.length();j++){
         num=num*8+(S[j]-'0');
      }
      //９進数に変換
      string st_9="";
      if(num==0){
        st_9="0";
      }
      while(num>0){
        st_9+=to_string(num%9);
        num=num/9;
      }
      reverse(st_9.begin(),st_9.end());
      for(int k=0;k<st_9.length();k++){
        if(st_9[k]=='8'){
            st_9[k]='5';
        }
      }
       N=st_9;
}

   
   cout<<N<<endl;
   
}
