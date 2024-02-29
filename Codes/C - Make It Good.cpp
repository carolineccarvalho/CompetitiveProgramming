#include <bits/stdc++.h>

using namespace std;

vector<int> a;
int n;

bool good(long long m){
    if(m == n-1 || m == n-2) return true;

    int l = m;
    int r = n-1;
    int anterior = -1;
    while(l<=r){
        if(a[l]==a[r]){
            if(anterior==-1) anterior = a[l];
            else if(anterior>a[l]) return false;
            anterior = a[l];
            l++;
            r--;
        }else{
            if(a[l]<a[r]){
                if(anterior==-1) anterior = a[l];
                else if(anterior>a[l]) return false;
                anterior = a[l];
                l++;

            }else{
                if(anterior==-1) anterior = a[r];
                else if(anterior>a[r]) return false;
                anterior = a[r];
                r--;
            }
        }
    }
    return true;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;

    cin >> t;

    for(int i =0; i<t; i++){
        cin >> n;
        a.clear();
        a.resize(n);
        for(int j=0; j<n; j++) cin >> a[j];

        int l = 0;
        int r = n-1;
        int ans=n-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(good(mid)){
                ans = mid;
                r = mid -1;
            }else l = mid + 1;
        }

        cout << ans << endl;
    }

}
