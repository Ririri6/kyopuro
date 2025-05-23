#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string s;
  cin>>s;

  vector<string> S;

  for(int i=0;i<s.length();){
    char c=s[i];
    int j=i;
    int num=0;
    while(true){
        if(s[j]!=c){
            string t=c+to_string(num);
            S.push_back(t);
            break;
        }else{
            num++;
        }
        j++;
    }
    i=j;
  }

  for(int i=0;i<S.size();i++){
    cout<<S[i];
  }

  cout<<endl;


}
