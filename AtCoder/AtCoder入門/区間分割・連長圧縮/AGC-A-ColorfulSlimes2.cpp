#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> a(N);
  for(int i=0;i<N;i++){
    cin>>a[i];
  }

  vector<int> C;

  for(int i=0;i<N;){
    int v=a[i];
    int j=i+1;
    int num=1;

    while(true){
        if(a[i]==a[j]){
            num++;
        }else{
            C.push_back(num);
            break;
        }
        j++;
    }
    i=j;
  }

  int ans=0;
  for(int i=0;i<C.size();i++){
    ans+=(C[i]/2);
  }

  cout<<ans<<endl;
}
