#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int H,W;
  cin>>H>>W;

  int Si,Sj;
  cin>>Si>>Sj;

  vector<string> C(H);
  for(int i=0;i<H;i++){
    cin>>C[i];
  }

  string X;
  cin>>X;

  for(int i=0;i<X.length();i++){
    if(X[i]=='L'){
        if(Sj-2>=0 && C[Si-1][Sj-2]=='.'){
            Sj--;
        }
    }else if(X[i]=='R'){
        if(Sj-1+1<W && C[Si-1][Sj-1+1]=='.'){
            Sj++;
        }
    }else if(X[i]=='U'){
        if(Si-1-1>=0 && C[Si-1-1][Sj-1]=='.'){
            Si--;
        }
    }else if(X[i]=='D'){
        if(Si-1+1<H && C[Si-1+1][Sj-1]=='.'){
            Si++;
        }
    }
  }

  cout<<Si<<" "<<Sj<<endl;
}
