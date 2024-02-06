#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int _size, _grow, aux =0, itera=0;
    vector<int> _bigger;
    cin>>_size;
    for(int i =0; i<12;i++){
        cin>>_grow;
        _bigger.push_back(_grow);
    }
 
    sort(_bigger.begin(), _bigger.end());
 
    while(aux<_size && itera<13){
        aux+=_bigger[_bigger.size()-1-itera];
        itera++;
    }
 
    if(itera==13){
        cout << -1 << endl;
    }else{
        cout << itera << endl;
    }
 
    return 0;
}
