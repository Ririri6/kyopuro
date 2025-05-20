#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;
  
  int ans=0;
  for(int i=0;i<S.length();i++){
    string T="";
    for(int k=0;k<S.length()-1-i;k++){
        T+=S[k];
    }
    //cout<<T<<endl;
    int flag=0;
    string s1="";
    string s2="";
    for(int j=0;j<T.length()/2;j++){
        if(T.length()%2==0){
            s1+=T[j];
            s2+=T[T.length()/2+j];
        }else{
            s1="a";
            s2="b";
        }
    }
    //cout<<"s1:"<<s1<<endl;
    //cout<<"s2:"<<s2<<endl;
    if(s1==s2){
        flag=1;
    }
    if(flag==1){
        ans=T.length();
         cout<<ans<<endl;
         return 0;
    }
  }

 
}
