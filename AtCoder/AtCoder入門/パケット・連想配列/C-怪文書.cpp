#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n;
  cin>>n;
  
  vector<string> S(n);
  for(int i=0;i<n;i++){
    cin>>S[i];
  }

  set<char> M;
  
  
  for(int i=0;i<n;i++){
    for(int j=0;j<S[i].length();j++){
       M.insert(S[i][j]);
    }
  }

  for(auto m:M){
        map<string ,int> A;
        for(int i=0;i<n;i++){
            A[S[i]]=0;
            for(int j=0;j<S[i].length();j++){
                if(S[i][j]==m){
                    A[S[i]]++;
                }
            }
        }
        int min=50;
        for(auto a:A){
            if(a.second<min){
                min=a.second;
            }
        }
        
       
        for(int i=0;i<min;i++){
            cout<<m;
        }
        
        
    
  }

  cout<<endl;
}
