#include <bits/stdc++.h>
#define MAX 30001
#include <cmath>
#include <string>

using namespace std;
const int INF = 0x3f3f3f3f;
int n, m;
vector<vector<int>> matrix;
vector<vector<bool>> visited;
vector<vector<int>> dist;
vector<pair<int, int>> position = {{-1,0},{1,0},{0,-1},{0,1}};
pair<int, int> e;

bool valid(int x, int y){
    return x<n and y<m and x>=0 and y>=0 and (matrix[x][y]==1 or matrix[x][y]==3) and (!visited[x][y]);
}

void bfs(pair<int, int> beg){
    queue<pair<int, int>> q;
    q.push(beg);
    dist[beg.first][beg.second] = 1;
    visited[beg.first][beg.second] = true;
    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        for(auto pos: position){
            int x = pos.first + p.first;
            int y = pos.second + p.second;
            if(valid(x, y)){
                q.push({x,y});
                dist[x][y] = dist[p.first][p.second]+1;
                visited[x][y] = true;
            }
        }
    }


}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> n >> m;
    matrix = vector<vector<int>>(n, vector<int>(m));
    visited = vector<vector<bool>>(n, vector<bool>(m, false));
    dist = vector<vector<int>>(n, vector<int>(m, INF));
    pair<int, int> beg;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matrix[i][j];
            if(matrix[i][j]==3){
                e.first = i;
                e.second = j;
            }else if(matrix[i][j]==2){
                beg.first = i;
                beg.second = j;
            }
        }
    }

    bfs(beg);

    cout << dist[e.first][e.second] << endl;
}
