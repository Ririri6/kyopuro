#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());
    int left = 0, right = N;
    int ans = 0;

    while (left <= right) {
        int mid = (left + right) / 2;

     
        int count = A.end() - lower_bound(A.begin(), A.end(), mid);

        if (count >= mid) {
            ans = mid;      
            left = mid + 1;  
        } else {
            right = mid - 1; 
        }
    }

    cout << ans << endl;
    return 0;
}
