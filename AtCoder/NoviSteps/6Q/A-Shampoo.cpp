#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int V,A,B,C;
  cin>>V>>A>>B>>C;

  int num=0;

  while(true){
      num++;
      if(num%3==1){
        V-=A;
      }else if(num%3==2){
        V-=B;
      }else{
        V-=C;
      }

      if(V<0){
        if(num%3==1){
            cout<<"F"<<endl;
         }else if(num%3==2){
           cout<<"M"<<endl;
        }else{
           cout<<"T"<<endl;
        }
        return 0;
      }
  }
}
