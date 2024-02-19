#include <bits/stdc++.h>

using namespace std;


int main()
{
    int N, in, soma=0, maximo;
    cin >> N;
    vector<int> vetor;

    for(int i =0; i<N; i++){
        cin >> in;
        vetor.push_back(in);
    }

    maximo = vetor[0];

    for(int i = 0; i<vetor.size(); i++){
        soma = vetor[i];
        if(soma > maximo) maximo=soma;
        for(int j=i+1; j<vetor.size();j++){
            soma += vetor[j];
            if(soma > maximo) maximo=soma;
        }
    }

    cout << maximo << endl;
    return 0;
}
