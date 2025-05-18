#include <bits/stdc++.h>
using namespace std;



vector<int> A;
 
bool func(int i,int j){
    if(i==0){
        if(j==0){
            return true;
        }else{
            return false;
        }
    }else{
        bool flag=false;
        if(j>=A[i-1] && func(i-1,j-A[i-1])==true){
            flag=true;
        }
        if(func(i-1,j)==true){
            flag=true;
        }

        return flag;
    }
}
 
int main() {
    int N,X;
    cin>>N>>X;

    for(int i=0;i<N;i++){
      int a;
      cin>>a;
      A.push_back(a);
    }

   if(func(N,X)==true){
    cout<<"Yes"<<endl;
   }else{
    cout<<"No"<<endl;
   }

  
 
}
