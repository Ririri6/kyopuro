#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N;
  cin>>N;

  vector<long long> H(N);
  for(int i=0;i<N;i++){
    cin>>H[i];
  }
   
  int max=0;
  for(int i=0;i<N;i++){
    int j=i;
    int num=0;

    while(true){
        if(H[j]>=H[j+1] && j+1<N){
            num++;
        }else{
            if(num>max){
                max=num;
            }
            break;
        }
        j++;
    }
    i=j;

  }
  cout<<max<<endl;
}
