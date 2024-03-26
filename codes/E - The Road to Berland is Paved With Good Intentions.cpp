#include <bits/stdc++.h>
#define TAMAX 1e5
using namespace std;
 
const int MAX = 2e5+10;
int n;
vector<vector<int>> adj(MAX), adj_t(MAX);
vector<int> order, comp(MAX,-1);
vector<bool> used(MAX);
vector<int> resposta;
 
void addAsfaltado(int a, int b){
    a = a*2;
    b = b*2;
    int neg_a = a^1;
    int neg_b = b^1;
    adj[a].push_back(b); adj_t[b].push_back(a);
    adj[neg_b].push_back(neg_a); adj_t[neg_a].push_back(neg_b);
    adj[b].push_back(a); adj_t[a].push_back(b);
    adj[neg_a].push_back(neg_b); adj_t[neg_b].push_back(neg_a);
}
 
void addNAsfaltado(int a, int b){
    a = a*2;
    b = b*2;
    int neg_a = a^1;
    int neg_b = b^1;
    adj[neg_a].push_back(b);adj_t[b].push_back(neg_a);
    adj[neg_b].push_back(a);adj_t[a].push_back(neg_b);
    adj[b].push_back(neg_a);adj_t[neg_a].push_back(b);
    adj[a].push_back(neg_b);adj_t[neg_b].push_back(a);
 
}
 
void dfs1(int v){
    used[v] = true;
    for(auto w: adj[v]){
        if(!used[w]){
            dfs1(w);
        }
    }
    order.push_back(v);
}
 
void dfs2(int v, int c){
    comp[v] = c;
    for(auto w: adj_t[v]){
        if(comp[w]==-1){
            dfs2(w, c);
        }
    }
}
 
 
bool sat(){
    for(int i=0; i<2*n; i++){
        if(!used[i]){
            dfs1(i);
        }
    }
 
    reverse(order.begin(), order.end());
 
    for(int i=0, j=0; i<2*n; i++){
        if(comp[order[i]]==-1){
            dfs2(order[i],j++);
        }
    }
 
 
    for(int i = 0; i<2*n; i+=2){
        if(comp[i]==comp[i+1]){
            return false;
        }
    }
 
 
    used = vector<bool>(MAX);
    for(auto x: order){
        if(!used[x/2]){
            used[x/2] = true;
            if((x%2)==0) resposta.push_back(x/2);
        }
    }
 
    if(resposta.size()>n) return false;
 
    return true;
 
 
}
 
int main()
{
    int a, b, asfaltado;
    int m;
    cin >> n >> m;
 
    for(int i=0; i<m; i++){
        cin >> a >> b >> asfaltado; a--; b--;
        if(asfaltado){
            addAsfaltado(a, b);
        }else{
            addNAsfaltado(a, b);
        }
    }
 
    if(sat()){
        cout << resposta.size() << endl;
        for(auto it: resposta){
            cout << it+1 << " ";
        }
    }else{
        cout << "Impossible" << endl;
    }
 
    return 0;
}
