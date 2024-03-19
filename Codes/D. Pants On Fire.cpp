#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj(193);
vector<vector<int>> adj_t(193);

bool dfs1(int v, int query){
    for(auto w: adj[v]){
        if(w==query){
            return true;
        }
        if(dfs1(w,query)){
            return true;
        }
    }
    return false;
}

bool dfs2(int v, int query){
    for(auto w: adj_t[v]){
        if(w==query){
            return true;
        }
        if(dfs2(w, query)){
            return true;
        }
    }
    return false;
}

int main() {

    int n, m;
    string aux1, aux2, aux3, aux4, aux5;
    string linha;
    map<string, int> pos;
    int tam =0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> aux1;
        cin >> aux2;
        cin >> aux3;
        cin >> aux4;
        cin >> aux5;
        if(!pos.count(aux1)){
            pos[aux1] = tam;
            tam++;
        }
        if(!pos.count(aux5)){
            pos[aux5] = tam;
            tam++;
        }

        adj[pos[aux1]].push_back(pos[aux5]);
        adj_t[pos[aux5]].push_back(pos[aux1]);
    }

    for(int i=0; i<m; i++){
        cin >> aux1;
        cin >> aux2;
        cin >> aux3;
        cin >> aux4;
        cin >> aux5;
        if(!pos.count(aux1) || !pos.count(aux5)){
            cout << "Pants on Fire" << endl;
        }else if(dfs1(pos[aux1], pos[aux5])){
            cout << "Fact" << endl;
        }else if(dfs2(pos[aux1], pos[aux5])){
            cout << "Alternative Fact" << endl;
        }else{
            cout << "Pants on Fire" << endl;
        }
    }


    return 0;
}
