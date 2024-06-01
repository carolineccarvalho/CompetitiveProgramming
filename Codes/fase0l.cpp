#include <bits/stdc++.h>

using namespace std;
int c;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> c;
    vector<string> noise(c), mimir(c);

    for(int i=0; i<c; i++) cin >> mimir[i];

    for(int i=0; i<c; i++) cin >> noise[i];

    int u =0, d =0;
    vector<string> ans;
    while(u<c){
        if(mimir[u]==noise[d]){
            ans.push_back(noise[d]);
            u++; d++;
        }else{
            ans.push_back(noise[d]);
            u++;
        }
    }

    for(auto it: ans) cout << it << " ";
    cout << endl;

    return 0;
}
