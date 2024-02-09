#include <bits/stdc++.h>
#define REP(i, a, b) for (int i=a; i<b; i++)
using namespace std;

int main()
{
    int aux =0, j;
    string palavra;
    vector<char> sequencia;

    cin>>palavra;
    REP(i,0,palavra.size()) sequencia.push_back(palavra[i]);
    j=palavra.size();
    REP(i, 0, j-1){
        if(palavra[i]==palavra[i+1]){
            aux++;
            palavra.erase(i, 2);
            i-=2;
            if(i<-1){
                i=-1;
            }
        }
        j=palavra.size();
    }

    if(aux % 2 == 1) cout << "yes " << endl;
    else cout << "no " << endl;
}

