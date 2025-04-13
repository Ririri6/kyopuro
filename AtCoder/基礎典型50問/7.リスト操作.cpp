#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> a(10);

  for(int i=0;i<10;i++){
    cin>>a[i];
  }
  
  int ans=0;
  
  ans=a[0];
  ans=a[ans];
  ans=a[ans];

  cout<<ans<<endl;
}
