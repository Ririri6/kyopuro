#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A,B,C;
  cin>>A>>B>>C;

  vector<int> D(3);
 D[0]=A;
 D[1]=B;
 D[2]=C;
 sort(D.begin(),D.end());
 int odd=0;
 int even=0;

 for(int i=0;i<3;i++){
    if(D[i]%2==1){
        odd++;
    }else{
        even++;
    }
 }

  int ans=0;

 if(odd==2){
    ans++;
    for(int i=0;i<3;i++){
    if(D[i]%2==1){
        D[i]++;
      }
   }
}else if(even==2){
    ans++;
    for(int i=0;i<3;i++){
      if(D[i]%2==0){
        D[i]++;
      }
   }
 }
  

  for(int i=0;i<3;i++){
    ans+=(D[2]-D[i])/2;
  }

  cout<<ans<<endl;

}
