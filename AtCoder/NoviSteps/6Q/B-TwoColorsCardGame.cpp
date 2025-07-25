#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  map<string,int> s;
  for(int i=0;i<N;i++){
    string S;
    cin>>S;
    s[S]++;
  }

  int M;
  cin>>M;

  map<string,int> t;
  for(int i=0;i<M;i++){
    string T;
    cin>>T;
    t[T]++;
  }
  
  int max=0;
  for(auto c:s){
    int ans=0;
    ans+=c.second;
    ans-=t[c.first];
    if(ans>max){
        max=ans;
    }

  }
  cout<<max<<endl;

  
}
