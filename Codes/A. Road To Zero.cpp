#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long tests, x,y,a,b, difference;
    cin >> tests;
    for(int i =0; i<tests; i++){
        cin >> x >> y >> a>> b;
        difference = abs(x-y);
        if((x+y-difference)*a < (min(x,y))*b){
            cout << (x+y)*a << endl;
        }else{
            cout << min(x,y)*b + a * difference << endl;
        }

    }
    return 0;
}
