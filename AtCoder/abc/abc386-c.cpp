#include <iostream>
#include <string>
using namespace std;

int main()
{
    int K;
    cin >> K;
    string S;
    cin >> S;
    string T;
    cin >> T;
    
    //SとTが等しい
    if (S == T)
    {
        cout << "Yes" << endl;
    }
    else
    {
        //SとTのサイズが一緒
        //一文字だけ違う場合はYes
        if(S.length()==T.length()){
            int count=0;
            for(size_t i=0;i<S.length();i++){
                if(S[i]!=T[i]){
                    count++;
                }
            }
            if(count==1){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
        //Sの方が長い
        //Sを一文字削ってTと一致するならYes
        else if(S.length()>T.length()){
            int flag=0;
            
            for(size_t i=0;i<S.length();i++){
                if(S.substr(0, i) + S.substr(i + 1) == T){
                    flag=1;
                    break;
                }
            }

            if(flag==0){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }
        //Tの方が長い
        //Tのある文字をSのある位置に挿入して一致する場合にYes
        else if(S.length()<T.length()){
            int flag2=0;
            
            for(size_t i=0;i<T.length();i++){
                string tmp2=T;
                if(T.substr(0, i) + T.substr(i + 1) == S){
                    flag2=1;
                    break;
                }
            }

            if(flag2==1){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
}