#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main()
{
    string S;
    cin >> S;

    int N = S.length();

    int i = 0;

    while (i < N - 1)
    {
        if (S[i] == 'W' && S[i + 1] == 'A')
        {
            S[i] = 'A';
            S[i + 1] = 'C';

            if (i > 0)
            {
                i--;
            }
        }
        else
        {
            i++;
        }
    }

    cout << S << endl;
}