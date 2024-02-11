#include <bits/stdc++.h>

using namespace std;

int main()
{
    int entrada, i=5, aux=0;
    array<int,6> S = {1,5,10,25,50,100};
    cin>>entrada;

    while(i>=0){
        aux+= entrada/S[i];
        entrada=entrada%S[i];
        i--;
    }

    cout <<aux <<endl;


}

