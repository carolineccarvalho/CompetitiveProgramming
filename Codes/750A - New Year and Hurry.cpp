#include <bits/stdc++.h>

using namespace std;
int n, k;
bool good(int m){
    int soma =0;
    for(int i = 1; i<=m; i++){
        soma += i*5;
    }
    return 60*4-soma>=k;
}

int main()
{
    cin >> n >> k;
    int l =0;
    int r = n+1;
    while(r>l+1){
        int mid = l + (r-l)/2;
        if(good(mid)) l = mid;
        else r = mid;
    }

    cout << l << endl;
}
