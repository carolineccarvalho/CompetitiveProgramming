#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tamanho, maior = 0, elemento;
    set<pair<int, int>> p2;
    set<pair<int, int>> p1;
    cin >> tamanho;

    for(int i =0; i<tamanho; i++){
        cin >> elemento;
        p2.insert(make_pair(elemento+i,i));
        p1.insert(make_pair(elemento-i,i));
    }

    auto it2 = p2.end();
    auto it1 = p1.end();
    int i = 1;
    it2--;
    it1--;
    cout <<(*it2).first + (*it1).first << endl;

}

