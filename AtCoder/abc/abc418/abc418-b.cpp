#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin>>S;
   
  double ans=0.0;
  for(int i=0;i<S.length();i++){
    for(int j=i+1;j<S.length();j++){
        string t="";
        double num=0.0;
        double J=0.0;
        for(int k=i;k<=j;k++){
            t+=S[k];
            if(S[k]=='t'){
                num++;
            }
        }
       
        if(t.length() >=3 && t[0]=='t' && t[t.length()-1]=='t'){
             J=(num-2.0)/(t.length()-2.0);
        }else{
            J=0;
        }
        if(ans<J){
            ans=J;
        }

    }
  }
  cout << fixed << setprecision(17) << ans << endl;
}
