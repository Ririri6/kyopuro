#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main()
{
    int N, M;
    cin >> N >> M;

    Graph G(N);

    for (int i = 0; i < M; i++)
    {
        int A;
        int B;
        cin >> A >> B;

        G[A].push_back(B);
        G[B].push_back(A);
    }

    int max=0;
    int max_num;

    for(int i=0;i<N;i++){
         if(G[i].size()>max){
            max=G[i].size();
            max_num=i;
         }
    }

    sort(G[max_num].begin(),G[max_num].end());

    for(auto g:G[max_num]){
        cout<<g<<" ";
    }

    cout<<endl;
}
