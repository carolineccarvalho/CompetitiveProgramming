#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0); // Imprime tudo no final
    int tests, tamanho, separa, number; // separa é o k, tamanho é o n
    set<int> conjunto;//pense na lógica (se k =5) 12341234 ou 23452345
    cin>>tests;

    for(int i =0; i<tests; i++){
        cin >> tamanho;
        cin >> separa;
        conjunto.clear(); //limpar o set para cada teste

        for(int j =0; j<tamanho; j++){
            cin>>number;
            conjunto.insert(number);
        }

        if(conjunto.size()> separa) cout << -1 << endl; // se você tem 12345 e o k = 4, você nunca vai conseguir repetir a soma 1234 5???

        else{
            cout<<separa*tamanho << endl; // para garantir que vai ter a mesma quantidade de valores ex: 44444 k=3 411411411411411
            for(int j =0; j < tamanho; j++){
                for(auto it: conjunto) cout << it << " ";
                for(int k=0; k<separa-conjunto.size();k++) cout << 1 << " ";
            }
            cout << endl;
        }
    }


}

