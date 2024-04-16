#include <bits/stdc++.h>

using namespace std;
const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;
vector<int> d;
vector<int> p;

void dijkstra(int s){
    int n = adj.size();
    d.assign(n, INF);
    p.assign(n, -1);
    d[s] = 0;
    using pii = pair<int, int>;
    priority_queue<pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    while(!q.empty()){
        int d_v = q.top().first;
        int v = q.top().second;
        q.pop();
        if(d_v != d[v]) continue;
        for(auto edge: adj[v]){
            int to = edge.first;
            int len = edge.second;

            if(d[v] + len < d[to]){
                d[to] = d[v] + len;
                p[to] = v;
                q.push({d[to],to});
            }
        }
    }

}

int main()
{
    int t;
    int v, k;
    int a, b, c;
    int a_goal, b_goal;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> v >> k;
        adj.resize(v);
        for(int j =0; j<k; j++){
            cin >> a >> b >> c;
            a--; b--;
            adj[a].push_back(make_pair(b,c));
            adj[b].push_back(make_pair(a,c));
        }

        cin >> a_goal >> b_goal;
        a_goal--; b_goal--;

        dijkstra(a_goal);

        if(d[b_goal]==INF) cout << "NO" << endl;
        else cout << d[b_goal] << endl;

        adj.clear();
        d.clear();
        p.clear();
    }
    return 0;
}
