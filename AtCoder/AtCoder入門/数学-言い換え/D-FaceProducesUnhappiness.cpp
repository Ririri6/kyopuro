#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N,K;
  cin>>N>>K;

  string S;
  cin>>S;

  vector<int> M;
  for(int i=0;i<N;){
    int j=i;
    int num=0;
    while(true){
        if(S[i]==S[j]){
            num++;
        }else{
            M.push_back(num);
            break;
        }
        j++;
    }
    i=j;
  }
}
