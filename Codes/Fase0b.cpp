#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<long long, long long>>> adj;
long long n,k;

bool good(long long m){
    queue<long long> q;
    vector<bool> used(n);
    vector<long long> d(n);

    q.push(0);
    used[0] = true;
    while (!q.empty()) {
        long long v = q.front();
        q.pop();
        for (auto u : adj[v]) {
            if (!used[u.first] &&  u.second <= m) {
                used[u.first] = true;
                q.push(u.first);
                d[u.first] = d[v] + 1;
            }
        }
    }
    long long sum=0;
    for(auto it: used){
        if(it) sum++;
    }

    return sum>=k;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long m;
    cin >> n >> m>> k;
    adj.resize(n);

    long long a, b, peso;

    for(int i=0; i<m; i++){
        cin >> a >> b >> peso; a--; b--;
        adj[a].push_back(make_pair(b, peso));
        adj[b].push_back(make_pair(a, peso));
    }

    long long l = -1;
    long long r = 10000000000;
    long long ans = 10000000000;
    while(l<=r){
        long long m = l + (r-l)/2;
        if(good(m)){
            ans = m;
            r = m-1;
        }else{
            l = m+1;
        }
    }
    cout << ans << endl;

    return 0;
}
