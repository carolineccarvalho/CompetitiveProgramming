#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    long long n, k;
 
    cin >> t;
    for(int i =0; i< t; i++){
        cin >> n >> k;
        long long l = 1;
        long long r = k*n+1;
        long long ans;
        while(l<=r){
            long long mid = l + (r-l)/2;
            if(mid-mid/n >= k){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        cout << ans << "\n";
    }
}
