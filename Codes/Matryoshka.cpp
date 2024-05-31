#include <bits/stdc++.h>

using namespace std;
int t;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> t;
    vector<int> tamanho(t), ordem(t);

    for(int i=0; i<t; i++){
        cin >> tamanho[i];
        ordem[i] = tamanho[i];
    }

    sort(ordem.begin(), ordem.end());
    int aux=0;
    vector<int> recolher;

    for(int i=0; i<t; i++){
        if(tamanho[i] != ordem[i]){
            aux++;
            recolher.push_back(ordem[i]);
        }
    }

    sort(recolher.begin(), recolher.end());

    cout << aux << endl;
    if(aux!=0){
        for(auto it: recolher) cout << it << " ";
        cout << endl;
    }

    return 0;
}
