#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int N,Q;
   cin>>N;
   cin>>Q;
   
   
   map<int,map<int,int>> A;
   map<int,set<int>> B;

   for(int i=0;i<Q;i++){
    int num;
    cin>>num;

    int x;
    
    if(num==1){
        cin>>x;
        int y;
        cin>>y;
        A[y][x]++;
        B[x].insert(y);
    }else if(num==2){
        cin>>x;
        
        for(auto a:A[x]){
            int n=a.second;
            for(int j=0;j<n;j++){
                cout<<a.first<<" ";
            }
        }
        cout<<endl;
       
    }else if(num==3){
        cin>>x;
        for(auto b:B[x]){
            cout<<b<<" ";
        }
        cout<<endl;
    }
   }
}