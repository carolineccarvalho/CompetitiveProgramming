#include <bits/stdc++.h>

using namespace std;

int main()
{
    double c;
    cin >> c;
    double l = 0;
    double r = c;
    double ans=c;
    for(int i=0; i<150; i++){
        double mid = l + (r - l)/2;
            if((pow(mid, 2)+sqrt(mid))>=c){
                ans = mid;
                r = mid - 1;
            }else l = mid + 1;

    }
    cout << fixed << setprecision(15);
    cout << ans << endl;

}
