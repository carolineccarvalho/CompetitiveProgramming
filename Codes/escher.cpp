#include <bits/stdc++.h>

using namespace std;
int n;
vector<int> inteiros;
set<int> dif;

char two_pointers(){
    int l = 0;
    int r = n-1;

    while(l <= r){
        dif.insert(inteiros[l]+inteiros[r]);
        if(dif.size()>1) return 'N';
        l++;
        r--;
    }
    return 'S';
}


int main() {
    cin >> n;
    inteiros.resize(n);
    for(int i=0; i<n; i++){
        cin >> inteiros[i];
    }
    if(n%2==1){
        cout << "N" << endl;
        return 0;
    }

    cout << two_pointers() << endl;
}

