#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  string T;
  cin>>T;

  long long x=0;
  long long y=0;
  int m=0;//higashi=0,nushi=1,kita=2,minami=3

  for(int i=0;i<N;i++){
    if(T[i]=='S'){
       if(m==0){
        x++;
       }else if(m==1){
        x--;
       }else if(m==2){
        y++;
       }else if(m==3){
        y--;
       }
    }
    else if(T[i]=='R'){
        if(m==0){
            m=3;
        }else if(m==1){
            m=2;
        }else if(m==2){
            m=0;
        }else if(m==3){
            m=1;
        }
    }
  }

  cout<<x<<" "<<y<<endl;
}
