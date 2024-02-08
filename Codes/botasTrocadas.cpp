#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tests, result =0;
    pair<int,char> boot;
    vector<pair<int,char>> botas;
    array<int,61> tamanhoParDireito = { 0 };
    array<int,61> tamanhoParEsquerdo = { 0 };

    cin>>tests;
    for(int i=0; i<tests; i++){
        cin >> boot.first;
        cin >> boot.second;
        botas.push_back(boot);
    }

    sort(botas.begin(), botas.end());

    for(auto it: botas){
        if(it.second == 'e' || it.second == 'E') tamanhoParEsquerdo[it.first]++;
        else tamanhoParDireito[it.first]++;
    }

    for(int i = 30; i<61; i++){
        if(tamanhoParDireito[i]==tamanhoParEsquerdo[i]) result+=tamanhoParDireito[i];
        else if(tamanhoParDireito[i]>tamanhoParEsquerdo[i]) result+=tamanhoParEsquerdo[i];
        else result+=tamanhoParDireito[i];
    }

    cout << result << endl;
}
