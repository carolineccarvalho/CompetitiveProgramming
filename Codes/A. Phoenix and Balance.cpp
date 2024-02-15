#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int tests, n,sum1, sum2, cnt1, cnt2;
    cin >> tests;
    for(int i =0; i< tests; i++){
        sum1=0;
        sum2=0;
        cnt1=0;
        cnt2=0;
        cin >> n;
        for(int j=n; j>=1; j--){
            if(sum1 > sum2){
                if(cnt2 == n/2){
                    cnt1++;
                    sum1+=pow(2,j);
                }else {
                    cnt2++;
                    sum2+=pow(2,j);}
            }else{
                if(cnt1 == n/2){
                    cnt2++;
                    sum2+=pow(2,j);
                }else {
                    cnt1++;
                    sum1+=pow(2,j);}
            }
        }
        cout << abs(sum1-sum2) << endl;
    }
    return 0;
}
