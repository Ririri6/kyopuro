#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<string> S(N);
  for(int i=0;i<N;i++){
    cin>>S[i];
  }

  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        string T="";
        
        if(i!=j){
            T=S[i]+S[j];
        }
       
         
        int flag=0;
        for(int k=0;k<T.length()/2;k++){
            if(T[k]!=T[T.length()-1-k]){
                flag=1;
            }
        }

        if(flag==0 && T!=""){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
  }

  cout<<"No"<<endl;
}
