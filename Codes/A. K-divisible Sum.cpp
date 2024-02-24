#include <bits/stdc++.h>

using namespace std;

int n, k, mult;

bool good(int m){
    if (n == 1) return false;
    return ((mult*k-m)/(n-1) < m || ((mult*k-m)/(n-1) == m && (mult*k-m)%(n-1)==0));
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    for(int i =0; i<t;i++){
        cin >> n >> k;
        mult = (n / k);
        if(n%k != 0) mult++;
        int l = 0;
        int r = mult*k;
        int ans = mult*k;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(good(mid)){
                ans = mid;
                r = mid-1;
            }else{
                l = mid+1;
            }
        }
        cout << ans << endl;
    }
}
