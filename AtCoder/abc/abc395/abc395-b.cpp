#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int N;
    cin >> N;

    
    vector<string> S(N, string(N, '.'));

    for (int i = 0; i < N; i++)
    {
        int j = N - i - 1; 
        if (i <= j)
        {
            if ((i + 1) % 2 == 1)
            {
                for (int a = i; a <= j; a++)
                {
                    for (int b = i; b <= j; b++)
                    {
                        S[a][b] = '#';
                    }
                }
            }else{
                for (int a = i; a <= j; a++)
                {
                    for (int b = i; b <= j; b++)
                    {
                        S[a][b] = '.';
                    }
                }
            }
        }
    }

    
    for (int i = 0; i < N; i++)
    {
        cout << S[i] << endl;
    }

   
}
