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
        int l=0;
        int r=n-1;
        cin >> x;
        bool ok = false;
        while(r>=l){
            int m = (l+r)/2;
            if(elements[m]==x){
                ok = true;
                break;
            }else if(elements[m]>x){
                r=m-1;
            }else{
                l=m+1;
            }
        }

        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
