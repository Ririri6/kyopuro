#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> x(N);
  vector<int> y(N);
  vector<int> h(N);
  for(int i=0;i<N;i++){
    cin>>x[i]>>y[i]>>h[i];
  }

  for(int i=0;i<=100;i++){
    for(int j=0;j<=100;j++){
        int flag=1;
        int H=1;
       for(int k=0;k<N;k++){
        if(h[k]!=0){
           H=h[k]+abs(x[k]-i)+abs(y[k]-j);
           break;
        }
        flag=1;
       }

       for(int k=0;k<N;k++){
          if(max(H-abs(x[k]-i)-abs(y[k]-j),0)!=h[k]){
            flag=0;
          }
       }
       if(flag==1){ 
        cout<<i<<" "<<j<<" "<<H<<endl;
        return 0;
       }

    }
  }
}
    /*
     中心座標を見ていく．
     高度ｈが０出ないなら，高さＨは，条件式より求まる．
     求めたＨが条件を満たせばそれが高さとなり，その時のi,jが中心座標になる
     なぜ，Hは最終的なものだけしか検証しないのか？
     →Hを固定しても，中心座標の方を変更すれば良いから
     Hはどの座標でも中心座標が正しければ必ず同じになる
    */

