#include <bits/stdc++.h>

using namespace std;


int main()
{
    long long value;
    long long cnt = 0;
    cin >> value;
    while(value>0){
        if(value>=100){
            value-=100;
            cnt++;
        }else if(value>=20){
            value -= 20;
            cnt++;
        }else if(value>=10){
            value -= 10;
            cnt++;
        }else if(value>=5){
            value -= 5;
            cnt++;
        }else if(value>=1){
            value -= 1;
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
