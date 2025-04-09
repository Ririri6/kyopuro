#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  int a=0;
  int b=0;
  int c=0;

  for(int i=0;i<10;i++){
    if(S[i]=='o'){
        a++;
    }else if(S[i]=='x'){
        b++;
    }else if(S[i]=='?'){
        c++;
    }
  }

  int result=0;
  
  if(a==4){
    result=4*3*2*1;
  }else if(a==3){
    if(c>=1){
        result=4*3*2*b;
        //cを使わない
        result+=3*(4*3*2)/2
    }
  }else if(a==2){
    if(c>=2){
        //cを2枚使う
        result=4*3*c*(c-1);
        //cを1枚使う
        result+=4*3*2*3/2;
        
    }else if(c==1){
        result=4*3*2*3/2;
    }
    //cを使わない
    result+=6;
    
  }else if(a==1){
    if(c>=3){
        //aを1枚使う
        result=4*c*(c-1)*(c-2);
        //aを2枚使う
        result+=6*c*(c-1);
        //aを3枚使う
        result+=4*c;
        //aを4枚使う
        result+=1;
    }else if(c==2){
        //aを2枚使う
        result+=6*c*(c-1);
        //aを3枚使う
        result+=4*c;
        //aを4枚使う
        result+=1;

    }else if(c==1){
        //aを3枚使う
        result+=4*c;
        //aを4枚使う
        result+=1;
    }else{
        result+=1;
    }
    
  }else if(a==0){
    if(b>=4){
        //
        result=
    }
  }

  
}
