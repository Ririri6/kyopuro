#include<iostream>
using namespace std;

int main(){
    int X;
    cin>>X;

    int array[9][9];

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            array[i][j]=(i+1)*(j+1);

        }
    }
    
    int result=0;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(array[i][j]!=X){
                result+=array[i][j];
            }
            
        }
    }
    
    cout<<result<<endl;
}