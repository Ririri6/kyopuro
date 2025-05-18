#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }

  int max=0;
  
  for(int i=0;i<N;i++){
    for(int j=i;j<N;j++){
        vector<int> S;
        for(int k=i;k<=j;k++){
            S.push_back(A[k]);
        }

        int flag=0;
        for(int m=0;m<S.size()-1;m++){
            if(S[m]>S[m+1]){
                flag=1;
            }
        }

        if(flag==0){
            if(max<S.size()){
                max=S.size();
            }
        }
    }
  }

  cout<<max<<endl;
}
