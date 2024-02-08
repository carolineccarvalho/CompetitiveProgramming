#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int linhas, colunas, testes;
    vector<vector<char>> quadro;
    cin>>testes;

    for(int k=0; k<testes; k++){
        cin>>linhas>>colunas;
        for(int i=0; i<linhas; i++){
            for(int j=0; j<colunas; j++){
              if(i == 0 && j==colunas-1) cout << 'W';
              else cout <<'B';
            }
            cout << endl;
        }


    }
}

