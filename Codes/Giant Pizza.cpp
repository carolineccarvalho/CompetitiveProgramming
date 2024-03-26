#include <bits/stdc++.h>
#define TAMAX 1e5
using namespace std;

const int MAX = 2e5+10;
int n, m;
vector<vector<int>> adj(MAX), adj_t(MAX);
vector<int> order, comp(MAX, -1);
vector<bool> used(MAX);
vector<bool> assignment;

void addmaismais(int a, int b){
    a = a*2;
    b = b*2;
    int neg_a = a^1;
    int neg_b = b^1;
    adj[neg_a].push_back(b); adj_t[b].push_back(neg_a);
    adj[neg_b].push_back(a); adj_t[a].push_back(neg_b);
}

void addmenosmais(int a, int b){
    a = a*2;
    b = b*2;
    int neg_a = a^1;
    int neg_b = b^1;
    adj[a].push_back(b); adj_t[b].push_back(a);
    adj[neg_b].push_back(neg_a); adj_t[neg_a].push_back(neg_b);
}

void addmenosmenos(int a, int b){
    a = a*2;
    b = b*2;
    int neg_a = a^1;
    int neg_b = b^1;
    adj[a].push_back(neg_b); adj_t[neg_b].push_back(a);
    adj[b].push_back(neg_a); adj_t[neg_a].push_back(b);
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
    order.clear();
    for(int i=0; i<2*m; i++){
        if(!used[i]){
            dfs1(i);
        }
    }

    reverse(order.begin(), order.end());

    for(int i=0, j=0; i<2*m; i++){
        if(comp[order[i]]==-1){
            dfs2(order[i], j++);
        }
    }


    assignment.assign(m, false);
    for(int i=0; i<2*m; i+=2){
        if(comp[i]==comp[i+1]){
            cout << "IMPOSSIBLE" << endl;
            return false;
        }
        assignment[i/2] = comp[i] > comp[i+1];
    }

    for(int i=0; i<m; i++){
        if(assignment[i] == 1){
            cout << "+ ";
        }else{
            cout << "- ";
        }
    }
    cout << endl;

    return true;
}
int main()
{
    int a, b;
    char c1, c2;

    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> c1 >> a >> c2 >> b; a--; b--;

        if(c1=='+' && c2 == '+'){
            addmaismais(a,b);
        }else if(c1=='-' && c2 == '+'){
            addmenosmais(a,b);
        }else if(c1=='+' && c2 == '-'){
            addmenosmais(b,a);
        }else{
            addmenosmenos(a,b);
        }
    }

    sat();


    return 0;
}
