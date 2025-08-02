#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(N);
  vector<int> B(N);
  for(int i=0;i<N;i++){
    cin>>A[i]>>B[i];
  }


  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        if(A[i]<A[j]){
            int tmp=A[i];
            int t=B[i];
            A[i]=A[j];
            B[i]=B[j];
            A[j]=tmp;
            B[j]=t;
        }else if(A[i]==A[j]){
            if(B[i]<B[j]){
                int t=B[i];
           
               B[i]=B[j];
            
               B[j]=t;
            }
        }
    }
  }

  for(int i=0;i<N;i++){
    cout<<A[i]<<" "<<B[i]<<endl;
  }
}
