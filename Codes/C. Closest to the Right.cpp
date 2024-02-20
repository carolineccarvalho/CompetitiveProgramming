#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k, x;
    cin >> n;
    cin >> k;
    vector<int> elements(n);

    for(int i=0; i<n; i++){
        cin >> elements[i];
    }

    for(int i=0; i<k; i++){
        int l=-1;
        int r=n;
        cin >> x;
        while(r>l+1){
            int m;
            m = (l+r)/2;
            if(elements[m]<x){
                l = m;
            }else{
                r = m;
            }
        }

        cout << r+1<< endl;
    }
}
