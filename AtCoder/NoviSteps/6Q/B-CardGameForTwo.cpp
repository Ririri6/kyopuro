#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> a(N);
  for(int i=0;i<N;i++){
    cin>>a[i];
  }

  sort(a.begin(),a.end());
  int sumA=0;
  int sumB=0;
  for(int i=0;i<N;i++){
    if(i%2==0){
        sumA+=a[N-1-i];
    }else{
        sumB+=a[N-1-i];
    }
  }

  cout<<sumA-sumB<<endl;
}
