#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,M;
  cin>>N>>M;
  
  vector<long long> K(M);
  vector<vector<long long>> A(M);
  for(int i=0;i<M;i++){
    long long k;
    cin>>k;

    K.push_back(k);
    for(int j=0;j<k;j++){
        long long a;
        cin>>a;
        A.at(i).push_back(a);
    }

  }

  vector<long long> B(N);
  for(int i=0;i<N;i++){
    cin>>B[i];
  }

  vector<long long> O(N);
  for(int i=0;i<N;i++){
    O[i]=i+1;
  }

  vector<long long> Menu(M);
  for(int i=0;i<M;i++){
    M[i]=i+1;
  }

  for(int i=0;i<N;i++){
     O[B[i]-1]=0;
     int flag=0;
     long long ans=0;
     for(int i=0;i<Menu.size();i++){
         if(A.at(Menu[i]-1).)
     }

  }

}
