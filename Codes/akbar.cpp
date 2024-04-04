#include <bits/stdc++.h>

using namespace std;
int n, r, m;
vector<vector<int>> adj;
vector<int> prot;
vector<int> color;

bool bfs(int s, int st){
    int aux=st;
    queue<int> q;
    q.push(s);
    color[s] = 1;
    while(!q.empty() && aux>=0){
        int v = q.front();
        q.pop();
        color[v] = 2;
        for(auto u: adj[v]){
            if(color[u]==2) return false;
            else{
                aux--;
                color[u] = 1;
                q.push(u);
            }
        }

    }
    return true;

}


int main() {
    int t; cin >> t;
    int pos;
    int c1, c2;
    bool possible;

    for(int i=0; i<t; i++){
        cin >> n >> r >> m;
        possible = true;
        prot = vector<int>(n,-1);
        adj.resize(n);
        color = vector<int>(n,0);

        for(int j=0; j<r; j++){
            cin >> c1 >> c2;
            c1--; c2--;
            adj[c1].push_back(c2);
            adj[c2].push_back(c1);
        }

        for(int j=0; j<m; j++){
            cin >> pos; pos--;
            cin >> prot[pos];
        }

        for(int j=0; j<n; j++){
            if(prot[i]!=-1){
                if(!bfs(i,prot[i])){
                    possible = false;
                    cout << "no" << endl;
                    break;
                }
            }
        }

        if(possible) cout << "yes" << endl;
    }
    return 0;
}
