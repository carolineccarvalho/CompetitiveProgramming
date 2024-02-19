#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tests, A, B;
    string word;
    cin >> tests;
    for(int i=0; i<tests; i++){
        cin >> word;
        A=0;
        B=0;
        for(int j=0; j<5; j++){
            if(word[j]=='A') A++;
            else B++;
        }

        cout << (a>b?'A':'B') << endl;
    }
}
