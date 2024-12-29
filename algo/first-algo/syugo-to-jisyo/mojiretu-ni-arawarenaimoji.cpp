#include<iostream>
#include<string>
#include<vector>
#include<set>
using namespace std;

int main(){
    string S;
    cin>>S;

    //文字列を分割
    set<char>s;
    for(int i=0;i<S.length();i++){
        s.insert(S[i]);
    }

    int result=26-s.size();

    cout<<result<<endl;
}