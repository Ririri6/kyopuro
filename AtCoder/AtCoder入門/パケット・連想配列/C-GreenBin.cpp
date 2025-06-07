#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<string> s(N);
  for(int i=0;i<N;i++){
    cin>>s[i];
  }

  long long ans=0;
  for(int i=0;i<N;i++){
    sort(s[i].begin(),s[i].end());
  }
  
  map<string ,long long> map;
  for(int i=0;i<N;i++){
    map[s[i]]++;
  }

  for(auto m:map){
    long long n=m.second;
    ans+=n*(n-1)/2;
   
  }

  

  
  
  cout<<ans<<endl;
}