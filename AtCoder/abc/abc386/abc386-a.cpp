#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int A,B,C,D;
    cin>>A>>B>>C>>D;
    
    vector<int>a={A,B,C,D};
    
    
    vector<int>result;
    
   
    cout<<endl;
    //フルハウス判定
    //初めて出現する整数ならressultに格納
    for(int i=0;i<4;i++){
        int flag=0;
        for(int j=0;j<result.size();j++){
            if(a[i]==result[j]){
                flag=1;
            }
        }
        if(flag==0){
            result.push_back(a[i]);
        }
    }
    

    
    if(result.size()==2){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


}