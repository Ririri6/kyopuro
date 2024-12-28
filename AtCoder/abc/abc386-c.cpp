#include <iostream>
#include <vector>
#include <algorithm>
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

    if (S == T)
    {
        cout << "Yes" << endl;
    }
    else
    {
        if(S.size()==T.size()){
            int count=0;
            for(int i=0;i<S.size();i++){
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
        else if(S.size()>T.size()){
            int flag=0;
            for(int i=0;i<S.size();i++){
                
                if(S.erase(i,1)==T){
                    flag=1;
                }
            }

            if(flag==0){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }
        else if(S.size()<T.size()){
            int flag2=0;
            for(int i=0;i<T.size();i++){
                for(int j=0;j<=S.size();j++){
                    if(j==S.size()){
                        S+=T[i];
                    }else{
                        S.insert(j,1,T[i]);
                    }
                    
                    if(S==T){
                        flag2=1;
                    }
                    
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