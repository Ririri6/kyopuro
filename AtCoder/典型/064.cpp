#include <bits/stdc++.h>
using namespace std;
 
int main() {
   long long N,Q;
   cin>>N>>Q;

   vector<long long> A(N);
   for(int i=0;i<N;i++){
    cin>>A[i];
   }


   vector<long long> L(Q);
   vector<long long> R(Q);
   vector<long long> V(Q);
   for(int i=0;i<Q;i++){
    cin>>L[i]>>R[i]>>V[i];
   }

   // 隣接差を計算
    vector<long long> D(N - 1);
    long long total = 0;
    for (int i = 0; i < N - 1; i++) {
        D[i] = A[i + 1] - A[i];
        total += llabs(D[i]);
    }

    for (int i = 0; i < Q; i++) {
       
        // 左境界 (l-1, l)
        if (L[i] > 1) {
            int idx = L[i] - 2;  // 0-index
            total -= llabs(D[idx]);
            D[idx] += V[i];
            total += llabs(D[idx]);
        }
        // 右境界 (r, r+1)
        if (R[i] < N) {
            int idx = R[i] - 1;  // 0-index
            total -= llabs(D[idx]);
            D[idx] -= V[i];
            total += llabs(D[idx]);
        }

        cout << total << endl;
    }


   
   



   
}
