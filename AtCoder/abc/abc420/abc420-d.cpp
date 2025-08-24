#include <bits/stdc++.h>
using namespace std;
 
int main() {
   int H,W;
   cin>>H>>W;
   vector<string> A(H);
   for(int i=0;i<H;i++){
    cin>>A[i];
   }

   const vector<int> dx = {1, 0, -1, 0};
   const vector<int> dy = {0, 1, 0, -1};

   using pint = pair<int,int>;
   int sx,sy;
   int gx,gy;
   vector<pair<int,int>> open;
   vector<pair<int,int>> close;
   for(int i=0;i<H;i++){
    for(int j=0;j<W;j++){
        if(A[i][j]=='S'){
            sx=i;
            sy=j;
        }
        if(A[i][j]=='o'){
            open.push_back(make_pair(i,j));
        }
        if(A[i][j]=='x'){
            close.push_back(make_pair(i,j));
        }
        if(A[i][j]=='G'){
            gx=i;
            gy=j;
        }
    }
   }

    queue<pint> que;
    vector<vector<int>> dist(H, vector<int>(W, -1));
    
    que.push({sx, sy});
    dist[sx][sy] = 0;


    while (!que.empty()) {
        // 現在地はマス (x, y)
        auto [x, y] = que.front();
        que.pop();
        
        // 4 方向への移動を試す
        int num=0;
    
        for (int dir = 0; dir < 4; ++dir) {
            int x2 = x + dx[dir];
            int y2 = y + dy[dir];
            
            // 新たなマスが場外の場合はダメ
            if (x2 < 0 || x2 >= H || y2 < 0 || y2 >= W) {
                continue;
            }
            
            // 新たなマスが壁の場合はダメ
            if (A[x2][y2] == '#' || A[x2][y2]=='x') {
                continue;
            }

             if(A[x2][y2]=='?'){
                vector<pair<int,int>> open_next;
                vector<pair<int,int>> close_next;
                for(auto o:open){
                    A[o.first][o.second]='x';
                    close_next.push_back(make_pair(o.first,o.second));
                }
                for(auto c:close){
                    A[c.first][c.second]='o';
                    open_next.push_back(make_pair(c.first,c.second));
                }
                open.clear();
                close.clear();
                open=open_next;
                close=close_next;
                for(int i=0;i<H;i++){
                    cout<<A[i]<<endl;
                }
            }

            
            //新たなマスが訪問済みの場合はスキップ
            if (dist[x2][y2] != -1) {
                continue;
            }

           
           
            // 新たなマスを訪問する
            cout<<x2<<" "<<y2<<endl;
            que.push({x2, y2});
            dist[x2][y2] = dist[x][y] + 1;
          
        }
    }
    cout << dist[gx][gy] << endl;


}