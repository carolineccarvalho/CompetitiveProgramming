#include <bits/stdc++.h>

using namespace std;

vector<int> entrada;
string t, p, aux;

bool good(long long m){
    aux = "";
    int j=p.size()-1, k=m-1;

    vector<int> indices(m);
    for(int i =0; i<m; i++){
        indices[i] = entrada[i];
    }

    sort(indices.begin(), indices.end());

    int work=0;
    for(int i=t.size()-1; i>=0; i--){
        if(k>=0){
            if(i == indices[k]-1) {
                k--;
                work = 1;
            }
        }
        if(j>=0){
            if(!work){
               if(t[i]==p[j]){
                aux+=t[i];
                j--;
                }
            }
        }

        work = 0;
    }

    return aux.size()==p.size();
}


int main()
{
    cin >> t >> p;

    entrada.resize(t.size());

    for(int j=0; j<t.size(); j++){
        cin >> entrada[j];
    }

    int l = 0;
    int r = t.size();
    int ans = 0;
    while(l<=r){
        int mid = l + (r - l)/2;
        if(good(mid)){
            ans = mid;
            l = mid + 1;
        }else r = mid - 1;
    }

    cout << ans << endl;
}
