#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n);

    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        x--;y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    //é necessário pegar o vertice com menor quantidade de arestas, para que vc possa colocar a maior quantidade possivel de policiais nos vertices
    int menor = adj[0].size();
    int indice = 0;
    for(int i=0; i<n; i++){
        if(adj[i].size()<menor){
            menor = adj[i].size();
            indice = i;
        }
    }

    vector<int> ans(n);
    ans.assign(n, 1);
    ans[indice] = 0;
    for(int i = 0; i<adj[indice].size(); i++){
        ans[adj[indice][i]] = 0;
    }

    for(auto it: ans){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
