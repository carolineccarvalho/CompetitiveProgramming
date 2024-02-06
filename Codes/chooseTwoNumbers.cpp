#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
    int size1, size2;
    cin>>size1;
    int a[size1];
    for(int i=0; i<size1; i++){
        cin >> a[i];
    }
    cin>>size2;
    int b[size2];

    for(int i=0; i<size2; i++){
        cin >> b[i];
    }
    sort(a,a+size1);
    sort(b,b+size2);

    cout << a[size1-1] << " " << b[size2-1];
    return 0;
}
