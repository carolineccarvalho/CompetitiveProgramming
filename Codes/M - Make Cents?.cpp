#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

unordered_map<string, double> dict;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int tests, convert, have;
    string name;
    float value, aux;


    cin >> tests;

    for(int i=0; i<tests; i++){
        cin >> convert;
        cin >> have;
        dict.reserve(convert+1);
        dict.emplace(make_pair("JD", 1));
        aux =0;
        for(int j=0; j< convert; j++){
            cin >> name;
            cin >> value;
            dict[name] = value;
        }
        for(int j=0; j<have; j++){
            cin >> value;
            cin >> name;
            aux += dict[name]*value;
        }
        cout << fixed << setprecision(6) << aux << "\n";
    }

    return 0;
}
