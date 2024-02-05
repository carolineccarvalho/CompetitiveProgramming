#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int movement(int n){
    if(n==0){
        return 0;
    }else if(n%2==0 && n>0){
        return 1;
    }else if(n%2==0 && n<0){
        return 2;
    }else if(n%2!=0 && n>0){
        return 2;
    }else{
        return 1;
    }
}

int main()
{
    int tests;
    int a, b;
    vector<int> moveVector;
    cin>>tests;

    for(int i=0;i<tests;i++){
        cin>>a>>b;
        moveVector.push_back(movement(a-b));
    }

    for(auto it: moveVector){
        cout << it << endl;
    }
    return 0;
}
