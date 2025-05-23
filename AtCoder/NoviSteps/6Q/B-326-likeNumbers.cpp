#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  while(true){
    string n=to_string(N);
    if(n.length()==3){
        int h=n[0]-'0';
        int j=n[1]-'0';
        int i=n[2]-'0';

        if(h*j==i){
            cout<<N<<endl;
            return 0;
        }
    }
    N++;
  }
}
