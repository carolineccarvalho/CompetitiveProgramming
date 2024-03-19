#include <bits/stdc++.h>

using namespace std;

int n, cnt, qtd;
set<int> resposta;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> tin, low;

void dfs(int v, int p=-1){
    visited[v] = true;
    tin[v] = low[v] = cnt++;
    int children = 0;
    for(auto w: adj[v]){
        if(w == p) continue;
        if(visited[w]){
            low[v] = min(low[v],tin[w]);
        }else{
            dfs(w,v);
            low[v] = min(low[v], low[w]);
            if(tin[v] <= low[w] && p!=-1){
                resposta.insert(v);
            }
            children++;
        }
    }
    if(p==-1 && children>1){
        resposta.insert(v);
    }

}

int findpointcut(){
    cnt = 0;
    qtd = 0;
    visited.assign(n, false);
    tin.assign(n,-1);
    low.assign(n,-1);

    for(int i=n-1; i>=0; i--){
        if(!visited[i]){
            dfs(i);
        }
    }

    return resposta.size();
}
int main() {
    int m;
    int a, b;
    cin >> n >> m;
    while(n!=0 && m !=0){
        adj.resize(n);

        for(int i=0; i<m; i++){
            cin >> a >> b;
            a--;b--;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        cout << findpointcut() << endl;
        adj.clear();
        visited.clear();
        tin.clear();
        low.clear();
        resposta.clear();
        cin >> n >> m;
    }


    return 0;
}
