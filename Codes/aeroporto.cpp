#include <bits/stdc++.h>
#define TAMMAX 2000
using namespace std;


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int A, V, k=1;
    int X, Y;
    cin >> A >> V;
    while(A!=0 && V!=0){
        vector<vector<int>> adj(A);
        vector<int> ans;
        for(int i =0; i<V; i++){
            cin >> X >> Y;
            X--;Y--;
            adj[X].push_back(Y);
            adj[Y].push_back(X);
        }

        unsigned int maximo = 0;

        for (int i = 0; i < A; i++) {
            if (maximo < adj[i].size()) {
                maximo = adj[i].size();
            }
        }

        for (int i = 0; i < A; i++) {
            if (maximo == adj[i].size()) {
                ans.push_back(i+1);
            }
        }
        cout << "Teste " << k++ << endl;
        for(auto it: ans){
            cout << it << " ";
        }
        cout << endl;

        cin >> A >> V;
    }
}
