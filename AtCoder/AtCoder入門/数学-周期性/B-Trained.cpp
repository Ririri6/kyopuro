#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> a(N);
  for(int i=0;i<N;i++){
    cin>>a[i];
  }

  long long ans=1;
  long long h=1;
  while(true){
    if(a[h-1]==2){
        cout<<ans<<endl;
        return 0;
    }else{
        h=a[h-1];
        ans++;
    }
    if(ans==N){
        break;
    }
  }
  cout<<-1<<endl;
}
