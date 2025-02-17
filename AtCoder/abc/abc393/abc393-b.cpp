#include<iostream>
#include<string>
using namespace std;

int main(){
    string S;
    cin>>S;
    int result=0;

    for(int i=0;i<S.length();i++){
        for(int j=i+1;j<S.length();j++){
            for(int k=j+1;k<S.length();k++){
                if(j-i==k-j && S[i]=='A' && S[j]=='B' && S[k]=='C'){
                     result++;
                }
            }
        }
    }

    cout<<result<<endl;
}