#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  double S;
  cin>>N>>S;
  //cout<<S+0.5<<endl;
  vector<double> T(N);
  for(int i=0;i<N;i++){
    cin>>T[i];
  }

  int flag=0;
  if(T[0]>=S+0.5){
    flag=1;
  }
  for(int i=0;i<N-1;i++){
    if((T[i+1]-T[i])>=S+0.5){
        flag=1;
    }
  }

  if(flag==0){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
}
