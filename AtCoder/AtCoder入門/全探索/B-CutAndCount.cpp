#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  string S;
  cin>>S;

  int max=0;

  for(int i=0;i<N;i++){
    set<char> s1;
    set<char> s2;
    for(int j=0;j<=i;j++){
        s1.insert(S[j]);
    }
    for(int k=i+1;k<N;k++){
        s2.insert(S[k]);
    }
     int sum=0;
    for(auto a:s1){
        for(auto b:s2){
            if(a==b){
                sum++;
            }
        }
    }

    if(sum>max){
        max=sum;
    }

  }

  cout<<max<<endl;
}
