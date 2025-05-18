#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  vector<string> A;
  for(int i=0;i<S.length();i++){
    for(int j=i;j<S.length();j++){
        string s="";
        for(int k=i;k<=j;k++){
            s+=S[k];
        }
        //cout<<s<<endl;
        A.push_back(s);
    }
  }

  int max=0;
  for(int i=0;i<A.size();i++){
    int flag=0;
    for(int j=0;j<=A[i].length()/2;j++){
        if(A[i][j]!=A[i][A[i].length()-j-1]){
            flag=1;
        }

    }

    if(flag==0){
        if(max<A[i].length()){
            max=A[i].length();
        }
    }
  }

  cout<<max<<endl;
}
