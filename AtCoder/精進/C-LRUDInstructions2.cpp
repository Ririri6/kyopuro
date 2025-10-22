#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;

   string S;
   cin>>S;

   int x=0;
   int y=0;
   set<pair<long long, long long>> p;
   
   p.insert(make_pair(x,y));
   
   
  for(int i=0;i<N;i++){
    int num=p.size();
    if(S[i]=='R'){
        x++;
    }else if(S[i]=='L'){
        x--;
    }else if(S[i]=='U'){
        y++;
    }else if(S[i]=='D'){
        y--;
    }
    p.insert(make_pair(x,y));
    if(num==p.size()){
        cout<<"Yes"<<endl;
        return 0;
    }
    
  }
  cout<<"No"<<endl;
}