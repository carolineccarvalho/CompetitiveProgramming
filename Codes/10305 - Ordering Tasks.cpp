#include <bits/stdc++.h>

using namespace std;

int n, m, maior;
vector<vector<int>> adj(100);
vector<bool> visited;
vector<int> ans;

void dfs(int v){
    visited[v] = true;
    sort(adj[v].begin(), adj[v].end(), greater<int>());
    for(auto w: adj[v]){
        if(!visited[w]){
            dfs(w);
        }
    }

    ans.push_back(v);
}

void toposort(){
    for(int i=0; i<maior; i++){
        if(!visited[i]){
            dfs(i);
        }
    }

    reverse(ans.begin(), ans.end());
}
int main()
{
    cin >> n >> m;
    maior = n;
    while(n!=0 && m!=0){
        adj[n-1].push_back(m-1);
        cin >> n >> m;
        if(n>maior) maior = n;
    }

    visited.resize(maior);
    visited.assign(maior, false);

    toposort();

    for(int i=0; i<maior; i++){
        cout << ans[i]+1 << " ";
    }

    cout << endl;
    return 0;
}
