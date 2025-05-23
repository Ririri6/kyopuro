#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;

  vector<string> T;

  for(int i=0;i<S.length();){
    if(S[i]>='A'&&S[i]<='Z'){
        string t="";
        int j=i+1;
        t+=S[i];
        while(true){
            if(S[j]>='A' && S[j]<='Z'){
                t+=S[j];
                break;
            }else{

                t+=toupper((S[j]));
            }
            j++;
            
        }
        i=j+1;
        //cout<<"t:"<<t<<endl;

        T.push_back(t);
    }
  }

  sort(T.begin(),T.end());
  for(int i=0;i<T.size();i++){
    for(int j=0;j<T[i].length();j++){
        if(j!=0 && j!=T[i].length()-1){
            char c=T[i][j];
            T[i][j]=tolower(c);
        }
    }
    cout<<T[i];
  }
  cout<<endl;

  
}
