#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k, ldado, rdado, l, r, lresposta, rresposta;

    cin >> n;

    vector<int> a(n);

    for(int i =0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    cin >> k;
    for(int i=0; i<k; i++){
        cin >> ldado >> rdado;
        l = -1;
        r = n;
        while(r>l+1){
            int m = (l+r)/2;
            if(a[m]<=rdado){
                l=m;
            }else r=m;
        }

        lresposta = l;

        l = -1;
        r = n;
        while(r>l+1){
            int m = (l+r)/2;
            if(a[m]< ldado){
                l=m;
            }else r=m;
        }

        rresposta = r;

        cout << lresposta - rresposta + 1<< endl;
    }
}
