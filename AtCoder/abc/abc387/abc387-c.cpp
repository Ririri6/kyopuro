#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    long long L,R;
    cin>>L>>R;

    int count=0;
    
    vector<string>array1;
    for(int i=L;i<=R;i++){
        array1.push_back(to_string(i));
    }
    vector<string>array2;
   for(int i=L;i<=R;i++){
        string istr=to_string(i);
        //int maxi=int(istr[0]-'0');
        array2.push_back(istr.substr(0,1));
   }

   
   for(int i=0;i<array1.size();i++){
        int flag=0;
        for(int j=1;j<array1[i].length();j++){
            //cout<<array1[i][j]<<"桁の先頭"<<array2[i]<<endl;
            if(int(array1[i][j]-'0')>=stoi(array2[i])){
                flag=1;
                break;
            }
        }

        if(flag==0){
            count++;
        }
   }

   cout<<count<<endl;

}