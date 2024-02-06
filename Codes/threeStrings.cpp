#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> result;
    string a, b, c;
    int tests;

    cin>>tests;
    for(int j=0; j<tests; j++){
        cin>>a>>b>>c;
        for(int i=0; i<c.size(); i++){
        if(a[i] == c[i]){
            swap(b[i], c[i]);
        }else if(b[i] == c[i]){
            swap(a[i], c[i]);
        }else{
            a = " ";
            result.push_back("NO");
            break;
        }}
        if(a==b){
            result.push_back("YES");
        }
    }

    for(auto it: result){
        cout << it << endl;
    }


    return 0;
}
