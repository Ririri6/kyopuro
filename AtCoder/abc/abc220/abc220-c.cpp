#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  long long X;
  cin>>X;


  //数列Bは，数列Aを何回も連結したものだから周期性がある

  //まず，Aが最低何個必要か考える

  long long sum_a=0;
  for(int i=0;i<N;i++){
    sum_a+=A[i];
  }

  long long num=X/sum_a;

  long long ans=N*num;
  long long sum=sum_a*num;
  long long a=0;
  while(sum<=X){
      sum+=A[a];
      ans++;
      a++;
  }

  
  cout<<ans<<endl;
}
