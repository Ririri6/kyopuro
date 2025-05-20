#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A,B,C;
  long long X,Y;
  cin>>A>>B>>C>>X>>Y;

  
  long long min=A*X+B*Y+C*(X+Y);
  for(int x=0;x<=X;x++){
    long long m=0;
    for(int y=0;y<=Y;y++){
        for(int z=max(X-x,Y-y)*2;z<=X+Y;z++){
            if(x+z/2>=X && y+z/2>=Y){
                m=A*x+B*y+C*z;
                if(m<min){
                    min=m;
                }
            }
        }
    }
  }

  cout<<min<<endl;
}
