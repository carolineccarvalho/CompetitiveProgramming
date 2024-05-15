#include <bits/stdc++.h>

using namespace std;


int main() {
    int ans =0;
    int questoes;
    string gabarito, aluno;

    cin >> questoes >> gabarito >> aluno;

    for(int i=0; i<questoes; i++){
        if(gabarito[i]==aluno[i]){
            ans++;
        }
    }

    cout << ans << endl;
}
