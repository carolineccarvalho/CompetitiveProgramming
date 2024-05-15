#include <bits/stdc++.h>

using namespace std;
int N, B;
vector<int> inteiros;

int main(){
    cin >> N;
    inteiros.resize(N);

    cin >> B;

    for(int i=0; i<N; i++){
        cin >> inteiros[i];
    }
    sort(inteiros.begin(), inteiros.end());
    int l=0;
    int r=N-1;
    int ans=0;
    while(l<=r){
        if(l==r && inteiros[l]<=B){
            l++; r--;
            ans++;
        }
        else if(inteiros[l] + inteiros[r] > B){
            if(inteiros[r]<= B) ans++;
            r--;
        }else{
            ans++;
            r--;
            l++;
        }
    }
    cout << ans << endl;
}
