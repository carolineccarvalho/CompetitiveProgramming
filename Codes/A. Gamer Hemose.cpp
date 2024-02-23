#include <bits/stdc++.h>

using namespace std;
long long n, H;
vector<long long> damage;

bool good(int m){
    return ((m/2 + m%2)*damage[n-1] + m/2*damage[n-2])>=H;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tests;
    cin >> tests;
    for(int i =0; i< tests; i++){
        cin >> n >> H;
        damage.clear();
        damage.resize(n);
        for(int i = 0; i<n; i++){
            cin >> damage[i];
        }
        sort(damage.begin(),damage.end());
        long long l = 0, ans;
        long long r = H;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(good(mid)){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
}
