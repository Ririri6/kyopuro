#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;
  string S;
  cin>>S;
   
  long long ans=0;
  for(int i=0;i<N;){
    char c=S[i];
    int j=i;
    
    while(true){
        if(S[j]!=c){
            ans++;
            break;
        }
        j++;
    }
    i=j;

  }
  cout<<ans<<endl;
}
