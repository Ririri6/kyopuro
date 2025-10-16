#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N;
   cin>>N;

   string S;
   cin>>S;

   vector<int> M;
   vector<char> C;
   for(int i=0;i<N;){
    int num=0;
    int j=i;
    while(true){
      if(S[i]==S[j]){
        num++;
      }else{
        C.push_back(S[i]);
        M.push_back(num);
        break;
      }
      j++;
    }
    i=j;
   }

   
   int ans=0;
   for(int i=0;i<M.size()-1;i++){
    if(C[i]=='o'&&C[i+1]=='-'){
       ans=max(ans,M[i]);
    }else if(C[i]=='-' && C[i+1]=='o'){
        ans=max(ans,M[i+1]);
    }
   }
   if(ans==0){
    cout<<-1<<endl;
    return 0;
   }
   cout<<ans<<endl;
}