#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> p(N);
  for(int i=0;i<N;i++){
    cin>>p[i];
  }

  vector<int> s=p;
  sort(s.begin(),s.end());
  
  int judge=0;
  for(int i=0;i<N;i++){
     if(p[i]!=s[i]){
        judge=1;
     }
  }
  if(judge==0){
    cout<<"YES"<<endl;
    return 0;
  }

  for(int i=0;i<N;i++){
    for(int j=i+1;j<N;j++){
       vector<int> tmp=p;
       swap(tmp[i],tmp[j]);
       int flag=0;

       for(int k=0;k<N;k++){
          if(s[k]!=tmp[k]){
            flag=1;
          }
       }
       if(flag==0){
        cout<<"YES"<<endl;
        return 0;
       }
       tmp.clear();
    }

  }

  cout<<"NO"<<endl;
}
