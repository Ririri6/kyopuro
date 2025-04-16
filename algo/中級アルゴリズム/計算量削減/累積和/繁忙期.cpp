#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,D;
  cin>>N>>D;

  vector<long long> X(N);
  for(int i=0;i<N;i++){
    cin>>X[i];
  }

  vector<long long> S(N);
  long long sum=0;;
  for(int i=0;i<N;i++){
     sum+=X[i];
     S[i]=sum;
  }

  map<long long,string> a;
  for(int i=0;i<N;i++){
    if(i==0){
        a[S[D-1]]=(to_string(i)+"~"+to_string(i+D-1));
    }
    else if(i+D-1<N ){
        a[S[i+D-1]-S[i-1]]=(to_string(i)+"~"+to_string(i+D-1));
    }
    
  }

  string ans;
  long long max=0;
  for(auto t:a){
    if(max<t.first){
        max=t.first;
        ans=t.second;
    }
  }
  
  if(max==0){
    cout<<to_string(N-D)+"~"+to_string(N-1)<<endl;
  }
  else{
    cout<<ans<<endl;
  }
  
  




}
