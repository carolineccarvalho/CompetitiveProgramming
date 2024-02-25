#include <bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;

    vector<int> precos(t);

    for(int i=0; i<t; i++){
        cin >> precos[i];
    }

    sort(precos.begin(), precos.end());

    int q;
    cin >> q;

    for(int i =0; i<q; i++){
        int l = 0;
        int r = t-1;
        int ans = -1;
        int qi;
        cin >> qi;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(precos[mid] <= qi){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        cout << ans + 1 << endl;
    }

}
