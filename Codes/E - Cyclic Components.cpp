#include <bits/stdc++.h>

using namespace std;

int N, M, aux = 0;
bool ciclo;
vector<vector<int>> adj;
vector<bool> visitado;
vector<int> pai;

void dfs(int v){
    visitado[v] = true;
    if(adj[v].size()==0) ciclo = false;

    for(auto w: adj[v]){
        if(adj[w].size() != 2) ciclo = false;
        if(!visitado[w]){
            dfs(w);
        }
    }
}


int main()
{
    int a1, a2;
    cin >> N >> M;

    adj.resize(N);
    visitado.resize(N);
    pai.resize(N);

    visitado.assign(N, false);
    pai.assign(N,-1);

    for(int i=0; i<M; i++){
        cin >> a1 >> a2;
        a1--;a2--;

        adj[a1].push_back(a2);
        adj[a2].push_back(a1);
    }

    for(int i =0; i<N; i++){
        ciclo = true;
        if(!visitado[i]){
            dfs(i);
            if(ciclo){
                 aux++;
            }

        }
    }

    cout << aux << endl;
    return 0;
}
