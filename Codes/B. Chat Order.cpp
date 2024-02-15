#include <bits/stdc++.h>

using namespace std;

bool comp(pair<string, int> a, pair<string, int> b){
    return a.second > b.second;
}

void sort(map<string, int>& M){
    vector<pair<string, int>> A;

    for(auto& it:M){
        A.push_back(it);
    }

    sort(A.begin(), A.end(), comp);

    for(auto it: A){
        cout << it.first << endl;
    }

}
int main()
{
    int tests;
    string n;
    map<string, int> nomes;
    cin>>tests;
    for(int i =0; i<tests; i++){
        cin >> n;
        nomes[n]=i;
    }

    sort(nomes);

    return 0;
}
