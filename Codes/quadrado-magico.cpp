#include <bits/stdc++.h>

using namespace std;
int n;
vector<vector<int>> quadrado;
set<int> verify;


int magic(){
    int sum;
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=0; j<n; j++){
            sum += quadrado[i][j];
        }
        verify.insert(sum);
        if(verify.size()>1) return -1;
    }

    for(int j=0; j<n; j++){
        sum = 0;
        for(int i=0; i<n; i++){
            sum += quadrado[i][j];
        }
        verify.insert(sum);
        if(verify.size()>1) return -1;
    }

    return sum;
}


int main() {
    cin >> n;
    quadrado.resize(n);
    for(int i=0; i<n; i++){
        quadrado[i].resize(n);
        for(int j=0; j<n; j++){
            cin >> quadrado[i][j];
        }
    }

    cout << magic() << endl;
}
