#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long Q;
  cin>>Q;
  
  deque<pair<long long,long long>> A;
  for(int i=0;i<Q;i++){
    long long  num;
    cin>>num;

    if(num==1){
        long long c,x;
        cin>>c>>x;
         
        A.push_back({c,x});
    }else{
        long long k;
        cin>>k;
        long long sum=0;
        
        while(k>0 && !A.empty()){
          long long b=A.front().first;
          long long d=A.front().second;
          long long e=min(k,b);
          sum+=d*e;
          k-=e;
          b-=e;

          if(b==0){
            A.pop_front();
          }else{
            A.front().first=b;
          }
        }
        cout<<sum<<endl;
    }
  }
}
