#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int Q;
  cin>>Q;

  vector<string> S(Q);
  for(int i=0;i<Q;i++){
    cin>>S[i];
  }

  for(int i=0;i<Q;i++){
    if(S[i]=="READ"){
        int n=1;
        while(true){
          if((S[i-n]!=" ") && (S[i-n]!="READ")){
            cout<<S[i-n]<<endl;
            S[i-n]=" ";
            break;
           }else{
             n++;    
           }
        }
        
       
    }
  }


}
