#include <bits/stdc++.h>

using namespace std;


int main()
{
    int tests, tam;

    cin >> tests;

    for(int i =0; i<tests; i++){
        cin >> tam;
        vector<int> v(tam);
        v.clear();
        for(int j=0; j<tam; j++) cin >> v[j];

        int l=0;
        int r=tam-1;

        while(l<=r){
            if(l==r){
                cout << v[l];
                l++;
                r--;
            }else{
                cout << v[l] << " " << v[r] << " ";
                l++;
                r--;
            }
        }
        cout << endl;
    }
    return 0;
}
