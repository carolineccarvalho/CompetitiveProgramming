#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<int> color;
vector<bool> visited;
vector<int> ans;
int n, m;

bool eh_ciclo(int v){
    color[v] = 1;
    for(auto w: adj[v]){
        if(color[w] == 0){
            if(eh_ciclo(w)){
                return true;
            }
        }else if(color[w]==1){
            return true;
        }
    }
    color[v] = 2;
    return false;
}

void dfs(int v){
    visited[v] = true;
    sort(adj[v].begin(), adj[v].end(), greater<int>());
    for(auto w: adj[v]){
        if(!visited[w]){
            dfs(w);
        }
    }
    ans.push_back(v+1);
}

void toposort(){
    visited.resize(n);
    visited.assign(n,false);
    for(int i=n-1; i>=0; i--){
        if(!visited[i]){
            dfs(i);
        }
    }

    reverse(ans.begin(), ans.end());
}


int main()
{
    int x, y;
    cin >> n >> m;
    adj.resize(n);
    color.resize(n);
    color.assign(n, 0);

    for(int i =0; i<m; i++){
        cin >> x >> y;
        x--;y--;
        adj[x].push_back(y);
    }

    for(int i=0; i<n; i++){
        if(color[i] == 0 && eh_ciclo(i)){
            cout << "Sandro fails." << endl;
            return 0;
        }
    }

    toposort();

    for(auto it: ans){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
