#include <bits/stdc++.h>
#define TAMMAX 2000
using namespace std;


int main()
{
    int M, N;
    cin >> M >> N;
    vector<vector<int>> matriz(M);
    int aux = 0;

    for(int i =0; i<M; i++){
        string linha;
        cin >> linha;
        for(int j=0; j<N; j++){
            if(linha[j]=='.') matriz[i].push_back(-1);
            else{
                matriz[i].push_back(aux);
                aux++;
            }
        }
    }

    vector<vector<int>> adj(aux+1);

    for(int i =0; i<N; i++){
        for(int j=0; j<M-1; j++){
            if(matriz[j][i] != -1 && matriz[j+1][i] != -1){
                adj[matriz[j][i]].push_back(matriz[j+1][i]);
                adj[matriz[j+1][i]].push_back(matriz[j][i]);
            }
        }
    }

     for(int i =0; i<M; i++){
        for(int j=0; j<N-1; j++){
            if(matriz[i][j] != -1 && matriz[i][j+1] != -1){
                adj[matriz[i][j]].push_back(matriz[i][j+1]);
                adj[matriz[i][j+1]].push_back(matriz[i][j]);
            }
        }
    }

    int var = 0;

    for(int i=0; i<aux+1; i++){
        if(adj[i].size()== 4) var++;
    }

    cout << aux-var << endl;
}
