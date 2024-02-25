#include <bits/stdc++.h>

using namespace std;

string s;

bool good(int n){
    int maior = -1, aux=0;
    for(int i =0; i<s.size(); i++){
        while(s[i]=='L'){
            aux++;
            i++;
        }
        if(maior < aux){
            maior = aux;
        }
        aux = 0;
    }

    return maior < n;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> s;
        int l = 0;
        int r = s.size();
        int ans = s.size()+1;
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
