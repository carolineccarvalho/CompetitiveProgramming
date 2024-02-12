#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m, h, tests, aux;
    cin >> tests;

    for(int i =0; i < tests; i++){
        cin >> h >> n >> m; //10 9 1
        aux=0;
        while(n > 0 && h>20){
            h = h/2 + 10;
            n--;
        }

        if(h-10*m<=0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
