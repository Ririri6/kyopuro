#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

tree<int,null_type,greater<int>,rb_tree_tag, tree_order_statistics_node_update> S;
int main() {
   long long N,K;
   cin>>N>>K;
   vector<long long> P(N);
   for(int i=0;i<N;i++){
    cin>>P[i];
   }


   for(int i=0;i<K;i++){
        S.insert(P[i]);
   }
   
   for(int i=K-1;i<N;i++){
      cout<<*S.find_by_order(K-1)<<endl;
      if(i!=N-1){
        S.insert(P[i+1]);
      }
   }

}