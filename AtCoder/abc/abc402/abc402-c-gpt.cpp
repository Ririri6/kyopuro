#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, M;
    cin >> N >> M;

    vector<vector<int>> dishes(M);
    vector<vector<int>> used_in(N + 1);  

    for (int i = 0; i < M; ++i) {
        int K;
        cin >> K;
        dishes[i].resize(K);
        for (int j = 0; j < K; ++j) {
            cin >> dishes[i][j];
            used_in[dishes[i][j]].push_back(i);
        }
    }

    vector<int> B(N);
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    vector<int> bad_count(M);  
    vector<bool> ok(M, false); 
    int eatable = 0;

    
    for (int i = 0; i < M; ++i) {
        bad_count[i] = dishes[i].size();
    }

    for (int day = 0; day < N; ++day) {
        int b = B[day];  

        for (int recipe : used_in[b]) {
            bad_count[recipe]--;

            if (bad_count[recipe] == 0 && !ok[recipe]) {
                eatable++;
                ok[recipe] = true;
            }
        }

        cout << eatable << endl;
    }

    return 0;
}
