#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,K;
  cin>>N>>K;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
    A[i]--;
  }

  
  set<long long> used;
  vector<long long> path;
  long long now=0;
  while(used.count(now)==0){
    path.push_back(now);
    used.insert(now);
    now=A[now];
  }

  long long s=find(path.begin(),path.end(),now)-path.begin();
  long long r=path.size()-s;

  if(K<s){
    cout<<path[K]+1<<endl;
    return 0;
  }else{
    cout<<path[(K-s)%r+s]+1<<endl;
    return 0;
  }  

  
  
  

  
}
