#include <bits/stdc++.h>

using namespace std;
long long n;
long long x, y;
bool good(long long m){
    if (m < min(x,y)) return false;
    return (((m-min(x,y))/x + (m-min(x,y))/y) >= n-1);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long l, r;
    cin >> n >> x >> y;

    l = 0;
    r = max(x,y)*n;

    while(r>l+1){
        long long m = (l+r)/2;
        if(good(m)){
            r = m;
        }else{
            l = m;
        }
    }

    cout << r << endl;
}
