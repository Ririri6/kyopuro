#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin>>N;

  vector<int> h(N);
  for(int i=0;i<N;i++){
    cin>>h[i];
  }

  vector<int> A;

  for(int i=0;i<N;){
    int hight=h[i];
    int j=i;
    int count=0;
    while(true){
        if(h[j]!=hight){
            A.push_back(hight);
            break;
        }
        j++;
    }
    i=j;
  }
  
}
