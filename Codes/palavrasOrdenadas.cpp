#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tests;
    string input, ordered;
    vector<string> result;
    cin >> tests;

    for(int i =0; i<tests; i++){
        cin>>ordered;
        input = ordered;
        sort(ordered.begin(),ordered.end());
        if(input==ordered){
            result.push_back(input + ": O");
        }else{
            result.push_back(input + ": N");
        }
    }

    for(auto it: result){
        cout << it << endl;
    }

    return 0;
}
