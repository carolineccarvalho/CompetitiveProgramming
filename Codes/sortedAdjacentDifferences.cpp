#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);
    int tests, number, n;
    vector<int> original;
    cin >> tests;
    for(int i =0; i<tests; i++){
        cin>>number;
        original.clear();
        for(int j =0; j<number; j++){
            cin>>n;
            original.push_back(n);
        }

        sort(original.begin(), original.end());

        auto it = original.begin()+(original.size()/2)-1;
        auto it2 = original.begin()+(original.size()/2);;
        while(it2 != original.end() && it >= original.begin()){
            cout << *it2 << " " ;
            cout << *it << " ";
            it2++;
            it--;
        }

        if(it2 != original.end()){
            cout << *it2 << " " ;
        }

        cout << endl;
    }
}

