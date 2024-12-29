#include<iostream>
#include<vector>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

int main(){
    int N;
    cin>>N;

    vector<string>S(N);
    for(int i=0;i<N;i++){
        cin>>S[i];
    }

    set<string>result;
    for(int i=0;i<N;i++){
        result.insert(S[i]);
    }

    cout<<result.size()<<endl;

    /*
    //配列に入れるやり方だと時間切れになる
     
    //配列resultに配列Sの文字列がなければ追加
    vector<string>result;
    for(int i=0;i<N;i++){
        int flag=0;
        for(int j=0;j<result.size();j++){
            if(S[i]==result[j]){
                flag=1;
            }
        }

        if(flag==0){
            result.push_back(S[i]);
        }
    }

    cout<<result.size()<<endl;
    */
    
    
    
}