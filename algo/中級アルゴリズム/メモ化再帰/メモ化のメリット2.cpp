#include <bits/stdc++.h>
using namespace std;

int x=10;
map<int,int> dict;
vector<int> sum(10);


int rec(int n){
    sum[n-1]++;
    if(dict.count(n)){}
    else if(n==1 || n==2){
       dict[n]=1;
    }
    else {
        dict[n]=rec(n-2)+rec(n-1);
    }

    return dict[n];
}
 
int main() {
  int result=rec(x);
  for(int i=0;i<10;i++){
    cout<<sum[i]<<endl;
  }
}
