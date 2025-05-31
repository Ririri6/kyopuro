#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin>>s;

  vector<int> M;

  int min=100;
  
  for(char c='a';c<='z';c++){
     string t="";
     int num=0;
     for(int i=0;i<s.length();i++){
        if(s[i]!=c){
            num++;
            t+=c;
        }else{
            t+=s[i];
        }
    
     }

     if(num<min){
        min=num;
     }
  }

  cout<<min<<endl;
  


}
