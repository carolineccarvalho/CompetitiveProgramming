#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0); // Imprime tudo no final
    int vetor, dimen, aux=0;
    map<int,int> tamanhos;
    cin >> vetor;
    for(int i =0; i<vetor; i++){
        cin >> dimen;
        if(tamanhos.count(dimen)!= 0) tamanhos[dimen]++;
        else tamanhos.insert(make_pair(dimen,1));
    }

    for(auto it: tamanhos){
        aux+=it.second/2;
    }

    cout << aux/2 << endl;

}

