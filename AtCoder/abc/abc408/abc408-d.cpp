#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int T;
  cin>>T;

 vector<long long> ans;
  for(int i=0;i<T;i++){
    long long N;
    cin>>N;
    string S;
    cin>>S;
    vector<long long> M;
    for(int j=0;j<S.length();){
        int k=j;
        int num=0;
        while(true){
            if(S[j]==S[k]){
               num++;
            }else{
                M.push_back(num);
                break;
            }
            k++;
        }
        j=k;
    }
    
    sort(M.begin(),M.end());
    if(M.size()<=2){
        ans.push_back(0);
    }else{
       int c=0;
       int d=0;
       for(int i=0;i<M.size()-2;i++){
        c+=M[i];
       }
       for(int i=0;i<2;i++){
        d+=M[i];
       }
       
         ans.push_back(min(c,d));
    }
  
  }

  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<endl;
  }
}
