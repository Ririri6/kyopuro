#include <bits/stdc++.h>
using namespace std;
 
int main() {
  long long N,Q;
  cin>>N>>Q;

  vector<long long> A(N);
  for(int i=0;i<N;i++){
    cin>>A[i];
  }
  long long A_max=0;
  long long A_min=1000000;
  sort(A.begin(),A.end());
  for(int i=0;i<N;i++){
    if(A[i]>A_max){
        A_max=A[i];
    }
    if(A[i]<A_min){
        A_min=A[i];
    }
  }
  vector<long long >sum(N);
  sum[0]=A[0];
  for(int i=1;i<N;i++){
    sum[i]=sum[i-1]+A[i];
  }
  
  for(int i=0;i<Q;i++){
    int b;
    cin>>b;
    long long ans=0;

    if(b==1){
        cout<<1<<endl;
    }else if(A_max<b){
        cout<<-1<<endl;
    }else{
        long long l=0;
        long long r=N;
        long long c=(l+r)/2;
        while(r>l){
            if(A[c]>=b){
                r=c;
            }
            if(A[c]<b){
                l=c+1;
            }
            c=(r+l)/2;
        }

        if(l==0){
            ans=(b-1)*N+1;
        }else{
            ans=sum[l-1]+((b-1)*(N-l))+1;
        }
        
        if(ans<b || ans>sum[N-1]){
            cout<<-1<<endl;
        }else{
            cout<<ans<<endl;
        } 
        
      
    }

  }


  
}
