#include <bits/stdc++.h>
#define MAX 30001
#include <cmath>
#include <string>

using namespace std;
const int INF = 0x3f3f3f3f;
int m, n;
vector<vector<char>> matrix;
vector<pair<int, int>> possible = {{1,0},{-1,0},{0,1},{0,-1}};
vector<vector<bool>> visited;
bool valid(int x, int y){
    return (x<m) and (y<n) and (x>=0) and (y>=0) and(matrix[x][y] == 'H') and (!visited[x][y]);
}

pair<int, int> bfs(pair<int, int> beg){
    queue<pair<int, int>> pos;
    pos.push(beg);
    visited[beg.first][beg.second]=true;
    pair<int, int> result;
    int x,y;
    while(!pos.empty()){
        pair<int, int> v = pos.front();
        pos.pop();
        for(auto p: possible){

            x = p.first + v.first;
            y = p.second + v.second;
            if(valid(x,y)){
                visited[x][y]=true;
                result.first = x;
                result.second = y;
                pos.push({x,y});
            }
        }

    }
    return result;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    cin >> m >> n;
    matrix = vector<vector<char>>(m,vector<char>(n));
    visited = vector<vector<bool>>(m,vector<bool>(n,false));
    pair<int, int> beg;

    for(int i=0; i<m; i++){
        for(int j =0; j<n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 'o'){
                beg.first=i;
                beg.second=j;
            }
        }
    }

    pair<int, int> result = bfs(beg);
    cout << result.first + 1 << " " << result.second + 1;


}
