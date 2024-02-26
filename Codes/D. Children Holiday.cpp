#include <bits/stdc++.h>

using namespace std;
long long m, n;
vector<long long> t, z, y;
vector<long long> quantidade;

bool good(long long chute){
    long long sum = 0;
    for(int i =0; i<n; i++){
        sum += z[i]*(chute/(t[i]*z[i]+y[i])) + min((chute%(t[i]*z[i]+y[i]))/t[i], z[i]);
    }

    return sum >= m;
}

void constroi(long long chute){
    long long sum = 0;
    for(int i =0; i<n; i++){
        if(sum >= m){
            quantidade[i] = 0;
        }else{
            quantidade[i] = z[i]*(chute/(t[i]*z[i]+y[i])) + min((chute%(t[i]*z[i]+y[i]))/t[i], z[i]);
            sum += quantidade[i];
            if(sum > m){
                quantidade[i]-= sum - m;
            }
        }
    }

}
int main()
{
    cin >> m >> n;
    t.resize(n);
    z.resize(n);
    y.resize(n);
    quantidade.resize(n);

    for(int i=0; i<n; i++){
        cin >> t[i] >> z[i] >> y[i];
    }

    long long l = 0;
    long long r = 1e10;
    long long ans;

    while(l<=r){
        int mid = l + (r-l)/2;
        if(good(mid)){
            ans = mid;
            constroi(mid);
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    cout << ans << endl;

    for(auto it: quantidade) cout << it << " ";
    cout << endl;
}
