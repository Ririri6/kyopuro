#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;
  
  if(N%2==1){
    return 0;
  }

  string S="";
  for(int i=0;i<N/2;i++){
    S+="(";
  }
  for(int i=0;i<N/2;i++){
    S+=")";
  }
  set<string> A;
  do{
       A.insert(S);
  }while(next_permutation(S.begin(),S.end()));

  for(auto a:A){
    //正しい（）か判定
    vector<char> check;
    int flag=0;
    for(int i=0;i<a.length();i++){
      if(a[i]=='('){
        check.push_back('(');
      }else{
        if(check.size()==0 && a[i]!='('){
          flag=1;
        }else{
          check.pop_back();
        }
      }
    }
    if(check.size()!=0){
      flag=1;
    }

    if(flag==0){
      cout<<a<<endl;
    } 
  }
  
}
