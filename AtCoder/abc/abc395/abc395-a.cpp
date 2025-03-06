#include<iostream>
#include<vector>
using namespace std;

int main(){
   int N;
   cin>>N;

   vector<int>A(N);

   for(int i=0;i<N;i++){
    cin>>A[i];
   }

   int flag=0;
   for(int i=0;i<N-1;i++){
    if(A[i]>=A[i+1]){
        flag=1;
    }
   }

   if(flag==0){
    cout<<"Yes"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
}
