#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;

int main(){
    int N,Q;
    cin>>N>>Q;

    vector<int>query(Q);
    vector<int>P(Q);
    vector<int>H(Q);

    

    for(int i=0;i<Q;i++){
        cin>>query[i];
        if(query[i]==1){
            cin>>P[i]>>H[i];
        }else{
            P[i]=0;
            H[i]=0;
        }
    }

    //どのハトがどの巣にいるか
    map<int,int>s;

    for(int i=1;i<=N;i++){
        s[i]=i;
    }
    
    //どの巣に何羽いるか 
    map<int,int>a;
    for(int i=1;i<=N;i++){
        a[i]++;
    }
    
    
    int count=0;
    for(int i=0;i<Q;i++){
       
        if(query[i]==1){
            //移動前に鳩がいる巣が２羽だったら
            if(a[s[P[i]]]==2){
                count--;
            }
            a[s[P[i]]]--;
            a[H[i]]++;
            s[P[i]]=H[i];
            
            //移動後に鳩がいる巣が２羽だったら
            if(a[s[P[i]]]==2){
                count++;
            }
        }else{

            cout<<count<<endl;
        }
    }
    
    



}