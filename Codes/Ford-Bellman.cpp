#include <bits/stdc++.h>

using namespace std;
const int INF = 1000000000;
vector<pair<pair<int, int>,int>> adj;
vector<int> d;
int n, m, v;

void solve(){
    d = vector<int>(n, INF);
    d[v] = 0;
    for(int i=0; i<n-1; i++){
        for(auto edge: adj){
            if(d[edge.first.first] < INF)
                d[edge.first.second] = min(d[edge.first.second], d[edge.first.first]+edge.second);
        }
    }

}

int main()
{
    int a, b, c;
    cin >> n;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> a >> b >> c; a--; b--;
        adj.push_back({{a,b},c});
    }

    solve();

    for(auto dis: d){
        if(dis==1000000000){
            cout << 30000 << endl;
            continue;
        }
        cout << dis << " ";
    }

    cout << endl;

    return 0;
}

