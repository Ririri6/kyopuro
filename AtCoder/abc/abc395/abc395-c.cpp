#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main(){
    long long N;
    cin>>N;
    vector<int>A(N);

    for(int i=0;i<N;i++){
        cin>>A[i];
    }

    
    int result=1000000;
    
    
    map<int,int>count;

    for(int right=0;right<N;right++){
        count[A[right]]++;
        int left=0;
        while(count[A[right]]>1){
            result=min(result,right-left+1);
            count[A[left]]--;
            left++;
        }
    }

    if(result==1000000){
        result= -1;
    }
    
    
    cout<<result<<endl;

}