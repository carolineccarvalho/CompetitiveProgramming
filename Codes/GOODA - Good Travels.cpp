#include <bits/stdc++.h>

using namespace std;
long long N, M, S, E, sum;
vector<long long> fi, component, order;
vector<vector<long long>> adj, adj_scc;
vector<vector<long long>> adj_t;
vector<bool> visited;
vector<long long> raiz;
vector<long long> soma;
vector<long long> distancia;


void ajustaTamanho(){
    fi.resize(N);
    adj.resize(N);
    adj_t.resize(N);
    visited.resize(N);
    raiz.resize(N);
    soma.resize(N);
    adj_scc.resize(N);
    distancia.resize(N);
}

void dfs(long long v){
    visited[v] = true;
    for(auto w: adj[v]){
        if(!visited[w]){
            dfs(w);
        }
    }

    order.push_back(v);
}


void ordemTop(){
    visited.assign(N,false);
    for(int i=0; i<N; i++){
        if(!visited[i]){
            dfs(i);
        }
    }

    reverse(order.begin(), order.end());
}

void dfs2(int v){
    visited[v] = true;
    sum+=fi[v];
    component.push_back(v);
    for(auto w: adj_t[v]){
        if(!visited[w]){
            dfs2(w);
        }
    }
}

void constroi(){
    visited.assign(N, false);
    for(auto v: order){
        if(!visited[v]){
            sum = 0;
            dfs2(v);
            soma[component.front()] = sum;
            for(auto it: component) raiz[it] = component.front();
            component.clear();
        }
    }

    for(int i=0; i<N; i++){
        for(auto u: adj[i]){
            int r_u = raiz[u], r_i = raiz[i];

            if(r_u != r_i){
                adj_scc[r_i].push_back(r_u);
            }
        }
    }
}

void maior(long long v){
    for(auto w: adj_scc[v]){
        distancia[w] = max(distancia[v]+soma[w],distancia[w]);
        maior(w);
    }

}

int main() {
    long long a, b;
    cin >> N >> M >> S >> E;
    S--; E--;
    distancia.assign(N,0);
    ajustaTamanho();

    for(int i=0; i<N; i++){
        cin >> fi[i];
    }

    for(int i=0; i<M; i++){
        cin >> a >> b; a--; b--;
        adj[a].push_back(b);
        adj_t[b].push_back(a);
    }

    ordemTop();
    constroi();
    distancia[raiz[S]] = soma[raiz[S]];
    maior(S);
    cout << distancia[raiz[E]] << endl;

    return 0;
}
