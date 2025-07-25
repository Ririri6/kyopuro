#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i= 0; i< T; i++) 
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        int full = (1 << N) - 1;
        vector<bool> f(full + 1, false);
        queue<int> q;
        q.push(0);
        f[0] = true;

        bool can = false;

        while (!q.empty())
        {
            int current = q.front();
            q.pop();
            if (current == full)
            {
                can = true;
                break;
            }

            for (int i = 0; i < N; i++)
            {
                if ((current & (1 << i)) == 0)
                {
                    int next = current | (1 << i);
                    if (!f[next] && S[next - 1] == '0')
                    {
                        f[next] = true;
                        q.push(next);
                    }
                }
            }
        }

        if (can)
        {
            cout << "Yes"<<endl;
        }
        else
        {
            cout << "No"<<endl;
        }
    }
    return 0;
}
