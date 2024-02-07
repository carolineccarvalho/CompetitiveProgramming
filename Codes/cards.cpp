#include <bits/stdc++.h>
#include <algorithm>


using namespace std;

int main()
{
    int length;
    string number;
    cin >> length;
    cin >> number;
    int numberZ = count(number.begin(),number.end(),'z');
    int numberN = count(number.begin(),number.end(),'n');

    for(int i = 0; i<numberN; i++){
        cout<< "1 ";
    }

    for(int i = 0; i<numberZ; i++){
        cout<< "0 ";
    }
    cout<<endl;
}
