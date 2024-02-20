#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, M, value, aux=0;
    vector<int> diferenca;
    cin >> N >> M;
    for(int i=0; i<N; i++){
        cin >> value;
        diferenca.push_back(M-value);
    }

    for(int i=0; i<N-1; i++){
        if(diferenca[i]!=0){
            diferenca[i+1] -= diferenca[i];
            aux+=abs(diferenca[i]);
            diferenca[i] = 0;
        }
    }
    cout << aux << endl;

}
