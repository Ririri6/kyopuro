#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,Q;
   cin>>N>>Q;

   deque<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }

  for(int i=0;i<Q;i++){
    long long T,x,y;
    cin>>T>>x>>y;
    if(T==1){
        swap(A[x-1],A[y-1]);
    }else if(T==2){
        long long tmp=A[N-1];
        A.pop_back();
        A.push_front(tmp);
    }else if(T==3){
        cout<<A[x-1]<<endl;
    }
  }


}