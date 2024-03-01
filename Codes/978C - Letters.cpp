#include <bits/stdc++.h>

using namespace std;
vector<long long> a;
long long n, m;


int main()
{
    long long aux=0, b;
    cin >> n >> m;
    a.resize(n);

    for(int i =0; i<n; i++){
        cin >> a[i];
        aux+=a[i];
        a[i] = aux;
    }

    for(int i =0; i<m; i++){
        cin >> b;
        long long l=0;
        long long r=n-1;
        long long ans=n-1;
        while(l<=r){
            long long mid = l + (r - l)/2;
            if(b<=a[mid]){
                ans = mid;
                r = mid - 1;
            }else l = mid + 1;
        }
        if(ans == 0){
            cout << ans + 1 << " " << b << endl;
        }else{
            cout << ans + 1 << " " << b - a[ans-1] << endl;
        }
    }
}
