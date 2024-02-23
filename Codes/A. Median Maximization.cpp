#include <bits/stdc++.h>

using namespace std;
long long n, s;
bool good(int m){
    if(n == 1) return true;
    return m <= s/(n/2 + 1);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tests;
    cin >> tests;
    for(int i=0; i<tests; i++){
        cin >> n >> s;
        long long l = 0, ans;
        long long r = s;
        while(l <= r){
            long long mid = l + (r-l)/2;

            if(good(mid)){
                ans = mid;
                l = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        cout << ans << "\n";
    }
}
