#include<iostream>
using namespace std;

int main(){
    int A,B,C;
    cin>>A>>B>>C;

    int flag=0;
    if(A+B==C){
        flag=1;
    }
    else if(A+C==B){
        flag=1;
    }
    else if(B+C==A){
        flag=1;
    }else if(A==B && B==C){
        flag=1;
    }

    if(flag==1){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}