#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,Q;
  cin>>N>>Q;

  vector<long long> A(Q);
  for(int i=0;i<Q;i++){
    cin>>A[i];
  }

  map<long long,int> M;
  for(int i=0;i<Q;i++){
    M[A[i]]=0;
  }

  for(int i=0;i<Q;i++){
    if(M[A[i]]==0){
        M[A[i]]=1;
    }else{
        M[A[i]]=0;
    }
    
    vector<long long> T;
    int c=0;
    for(int i=1;i<=N;){
        int j=i;
        int num=0;
        
        if(M[i]==1){
            c++;
        }
        while(true){
            if(j<=N && M[i]==M[j]){
                num++;
            }else{
                T.push_back(num);
                break;
            }
            j++;
        }
        i=j;
         
    }    

    cout<<c<<endl;
   
  }
}
