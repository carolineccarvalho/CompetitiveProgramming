#include <bits/stdc++.h>

using namespace std;
string t;

bool good(int m){
    string s1 = string(m, '1')+string(m, '2');
    string s2 = string(m, '2')+string(m, '1');
    return (t.find(s1)!=std::string::npos || t.find(s2)!=std::string::npos);

}

int main()
{
    int n, ti;
    t = "";

    cin >> n;

    for(int i =0; i<n; i++){
        cin >> ti;
        t += to_string(ti);
    }

    int l = 1;
    int r = n/2;
    int ans;
    while(l<=r){
        int mid = l + (r-l)/2;
        if(good(mid)){
            ans = mid;
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    cout << ans*2 << endl;
}
