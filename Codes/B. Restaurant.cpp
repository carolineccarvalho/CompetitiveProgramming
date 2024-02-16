#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tarefas, l, r, aux=1;
    vector<pair<int, int>> horas;

    cin >> tarefas;

    for(int i =0; i<tarefas; i++){
        cin >> l >> r;
        horas.push_back(make_pair(l,r));
    }

    sort(horas.begin(), horas.end(),greater<pair<int, int>>());

    pair<int, int> time = horas[0];

    for(int i =1;i<horas.size();i++){
        if(horas[i].second < time.first){
            time = horas[i];
            aux++;
        }
    }

    cout << aux << endl;
    return 0;
}
