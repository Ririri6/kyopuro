#include<iostream>
#include<string>
using namespace std;

int main(){
    string S1,S2;
    cin>>S1>>S2;

    if(S1=="sick" && S2=="sick"){
         cout<<1<<endl;
    }
    else if(S1=="sick"){
        cout<<2<<endl;
    }
    else if(S2=="sick"){
        cout<<3<<endl;
    }
    else{
        cout<<4<<endl;
    }
}