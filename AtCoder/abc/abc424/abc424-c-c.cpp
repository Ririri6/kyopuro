#include <bits/stdc++.h>
using namespace std;

struct UnionFind {
    vector<int> p;
    UnionFind(int n): p(n, -1) {}
    int root(int x){ 
        return p[x]<0 ? x : p[x]=root(p[x]); 
    }
    void unite(int x, int y){
        x=root(x); y=root(y);
        if(x==y) return;
        if(p[x]>p[y]) swap(x,y);
        p[x]+=p[y]; p[y]=x;
    }
    bool same(int x,int y){ 
        return root(x)==root(y); 
    }
};

int main(){
    int N; 
    cin>>N;
    vector<int> A(N);
    vector<int> B(N);
    for(int i=0;i<N;i++) {
      cin>>A[i]>>B[i];
   }

    UnionFind uf(N);
    vector<int> initial(N,0);

    for(int i=0;i<N;i++){
        if(A[i]==0 && B[i]==0){
            initial[i]=1; 
        }else{
            if(A[i]>0) uf.unite(i, A[i]-1);
            if(B[i]>0) uf.unite(i, B[i]-1);
        }
    }

    vector<int> has(N,0);
    for(int i=0;i<N;i++){
        if(initial[i]){
            has[uf.root(i)] = 1;
        }
    }

    long long ans=0;
    for(int i=0;i<N;i++){
        if(has[uf.root(i)]) ans++;
    }

    cout<<ans<<endl;
}
