#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;

    vector<int> A(N), B(N);
    vector<vector<int>> G(N);      
    vector<int> first(N, 0);      

    for (int i=0; i<N; i++) {
        cin>>A[i]>>B[i];
        if (A[i]==0 && B[i]==0) {
            first[i]=1;
        }
        if (A[i]!=0) G[A[i]-1].push_back(i); 
        if (B[i]!=0) G[B[i]-1].push_back(i); 
    }

    vector<int> done(N, 0);
    queue<int> q;
    for (int i=0; i<N; i++) {
        if (first[i]==1) {
            done[i]=1;
            q.push(i);
        }
    }

    while (!q.empty()) {
        int v=q.front();
        q.pop();
        for (int next:G[v]) {
            if (!done[next]) {
                done[next]=1;
                q.push(next);
            }
        }
    }

    long long ans=0;
    for (int i=0; i<N; i++) {
        if (done[i]){
          ans++;
        } 
    }
    cout<<ans<<endl;
    return 0;
}
