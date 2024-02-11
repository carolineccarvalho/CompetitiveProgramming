#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int a, b, testes;
    cin>>testes;
    for(int i=0; i<testes; i++){
        cin >> a >>b;
        if(a%2==0 && b%2==0) cout << "yes" << endl;
        else if(a%2!=0 && b%2!=0) cout << "no" << endl;
        else{
            if(a%2==0 && a/2==b) cout << "no" << endl;
            else if(b%2==0 && b/2==a) cout << "no" << endl;
            else cout << "yes" << endl;
        }
    }
    return 0;
}


