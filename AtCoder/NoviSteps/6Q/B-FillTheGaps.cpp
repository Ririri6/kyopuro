#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(N);
   
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  int flag=0;

  while(flag==0){
    
    flag=1;
    for(int i=0;i<A.size()-1;i++){
        if(abs(A[i+1]-A[i])!=1){
            flag=0;
        }
    }

    for(int i=0;i<A.size()-1;i++){
        if(abs(A[i+1]-A[i])!=1){
           
            if(A[i+1]>A[i]){
                for(int j=1;j<A[i+1]-A[i];j++){
                    A.insert(A.begin()+i+j,A[i]+j);
                    
                }
            }else if(A[i+1]<A[i]){
                for(int j=1;j<A[i]-A[i+1];j++){
                    A.insert(A.begin()+i+j,A[i]-j);
                    
                }
            }

            break;
        }
    }
  }

  for(int i=0;i<A.size();i++){
    cout<<A[i]<<" ";
  }
  cout<<endl;
}
