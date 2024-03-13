#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> adj;
vector<int> dist;

void dfs(int v){
    for(auto w: adj[v]){
        if(dist[w]==-1){
            dist[w] = dist[v] + 1;
            dfs(w);
        }
    }

}

int main()
{
    //tamanho da minha lista de adjacencia
    int aux = 0;

    //entrada das linhas e colunas
    int L, C;
    cin >> L >> C;

    //matriz com L linhas
    vector<vector<int>> matriz(L);

    //entrada da linha
    string entrada;

    //posição em que a hermione começa
    pair<int, int> inicio;

    //vetor das posições que ela pode ter ido
    vector<pair<int, int>> pos;

    //sempre adicione a posição no respectivo vertice
    for(int i = 0; i<L; i++){
        cin >> entrada;
        for(int j=0; j<C; j++){
            if(entrada[j]!='.'){
                if(entrada[j]=='o'){
                    inicio = make_pair(i,j);
                }
                pos.push_back(make_pair(i,j));
                aux++;
                matriz[i].push_back(aux);
            }else{
                matriz[i].push_back(0);
            }

        }
    }

    //ajusta o tamanho para aux
    adj.resize(aux);
    dist.resize(aux);
    dist.assign(aux, -1);

    for(int i=0; i<L; i++){
        for(int j=0; j<C-1; j++){
            if(matriz[i][j] !=0 && matriz[i][j+1]!=0){
                adj[matriz[i][j]-1].push_back(matriz[i][j+1]-1);
                adj[matriz[i][j+1]-1].push_back(matriz[i][j]-1);
            }
        }
    }

     for(int i=0; i<C; i++){
        for(int j=0; j<L-1; j++){
            if(matriz[j][i] !=0 && matriz[j+1][i]!=0){
                adj[matriz[j][i]-1].push_back(matriz[j+1][i]-1);
                adj[matriz[j+1][i]-1].push_back(matriz[j][i]-1);
            }
        }
    }
    dist[matriz[inicio.first][inicio.second]-1] = 0;
    dfs(matriz[inicio.first][inicio.second]-1);

    int maior = dist[0];
    int indice = 0;

    for(int i =0; i<aux; i++){
        if(dist[i]>maior){
            maior = dist[i];
            indice=i;
        }
    }
    cout << pos[indice].first + 1 << " " << pos[indice].second + 1 << endl;

    return 0;
}
