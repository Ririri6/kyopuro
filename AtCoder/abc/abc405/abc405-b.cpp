#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,M;
  cin>>N>>M;
  

  vector<int> A(N);
  map<int,int> B;
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  for(int i=1;i<=M;i++){
    B[i]=0;
  }

  int count=0;
 
  if(B.size()!=M){
    cout<<0<<endl;
  }else{
    while(true){
       int flag=0;

    for(int i=0;i<A.size();i++){
      B[A[i]]+=1;
    }

    
    for(int i=1;i<=M;i++){
        if(B[i]==0){
            flag=1;
            break;
        }
    }

    if(flag==1){
        cout<<count<<endl;
        return 0;
    }else{
        count++;
        A.pop_back();
    }

    for(int i=01;i<=M;i++){
        B[i]=0;
    }
    }

    cout<<count<<endl;
    

  }

  


  
  
}
