#include <bits/stdc++.h>

using namespace std;

int main()
{
    string joias;
    set<string> diferenca;
    while(getline(cin,joias)){
        diferenca.insert(joias);
    }
    cout << diferenca.size() << endl;
    return 0;
}
