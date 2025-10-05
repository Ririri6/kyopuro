#include <bits/stdc++.h>
using namespace std;

//セグメント木
struct SegmentTree {
    int n;
    vector<int> seg;

    SegmentTree(int N) {
        n = 1;
        while (n < N) n <<= 1;
        seg.assign(2*n, INT_MAX);
    }

    // 更新
    void update(int idx, int val) {
        idx += n;
        seg[idx] = val;
        while (idx > 1) {
            idx >>= 1;
            seg[idx] = min(seg[idx*2], seg[idx*2+1]);
        }
    }

    // 区間最小値 [l,r)
    int query(int l, int r) {
        int res = INT_MAX;
        l += n; r += n;
        while (l < r) {
            if (l & 1) res = min(res, seg[l++]);
            if (r & 1) res = min(res, seg[--r]);
            l >>= 1; r >>= 1;
        }
        return res;
    }
};


int main() {
   long long N,Q;
   cin>>N>>Q;

   
   SegmentTree s(N+2);
   vector<long long> v(N+1);
   
   for(int i=1;i<=N;i++){
    v[i]=i;
    s.update(i,i);
   }
   
   for(int i=0;i<Q;i++){
    long long ans=0;
    long long X,Y;
    cin>>X>>Y;
    while(true){
      if(s.seg[1]>X){
        break;
      }
    
       long long x=1;
       while(x<s.n){
         if(s.seg[x*2]<=X){
            x=x*2;
         }else{
            x=x*2+1;
         }
        }

        long long p=x-s.n;
        if(p>N){
          break;
        }

        ans++;
        v[p]=Y;
        s.update(p,Y);
   }


   cout<<ans<<endl;
   }
}