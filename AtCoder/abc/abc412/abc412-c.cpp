#include <bits/stdc++.h>
using namespace std;

bool serch(long long N,vector<long long> S, long long K){
    long long done=0;
    long long p=0;
    if(N==1){
        return true;
    }

    while(p<N-1){
        long long r=p+2*S[p];
        long long t=-1;

        for(int i=p+1;i<=min(N-1,r);i++){
            if(t==-1 || i+2*S[i]>t+2*S[t]){
                t=i;
            }
        }

        if(t==-1){
        return false;
        }
        done++;
        p=t;
       if(done>K){
        return false;
       }
    }
    
   return true;
    
}



long long f(long long N,vector<long long> S){
    long long left=2;
    long long righit=N;
    long long result=-1;

    while(left<=righit){
         long long mid=(left+righit)/2;
         if(serch(N,S,mid)){
            result=mid;
            righit=mid-1;
         }else{
            left=mid+1;
         }
    }
    return result;
}
 
int main() {
  long long T;
  cin>>T;

  for(int i=0;i<T;i++){
    long long N;
    cin>>N;

    vector<long long> S(N);
    
    for(int j=0;j<N;j++){
        cin>>S[j];
    }
    
    
    cout<<"ans:"<<f(N,S)<<endl;
    
  }
}
