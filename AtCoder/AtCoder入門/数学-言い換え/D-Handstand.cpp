#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,K;
  cin>>N>>K;
  string S;
  cin>>S;
  
  int ans=0;
  for(int i=0;i<N;i++){
    if(S[i]=='0'){
        ans++;
    }
  }
  
  vector<int> M;
  for(int i=0;i<N;){
    int num=0;
    int j=i;
    if(S[i]=='0'){
        while(true){
            if(S[i]==S[j]){
                num++;
            }else{
                M.push_back(num);
                break;
            }
            j++;
        }
        i=j;
    }else{
        i++;
    }
  }

  sort(M.rbegin(),M.rend());
  cout<<M[0]<<endl;
  cout<<N-max(ans-M[0]*K,0)<<endl;


}
