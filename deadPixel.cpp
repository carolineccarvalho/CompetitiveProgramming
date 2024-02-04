#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void replacement(int &bigger, int aux){
    if(bigger<aux){
        bigger=aux;
    }
}
int main()
{
    int tests;
    int a,b,x,y;
    cin>> tests;
    int bigger[tests], aux;

    for(int i=0; i<tests; i++){
        cin>>a>>b>>x>>y;
        bigger[i] = -1;
    if(x+1<a){
        aux = (a-1-x)*b;
        replacement(bigger[i],aux);
    }
    if(x-1>0){
        aux = (a-x+1)*b;
        replacement(bigger[i],aux);
    }
    if(y+1<b){
        aux = (b-y-1)*a;
        replacement(bigger[i],aux);
    }
    if(y-1>0){
        aux = (y)*a;
        replacement(bigger[i],aux);
    }}

    for(int i=0;i<tests;i++){
        cout << bigger[i] <<endl;
    }
    return 0;
}
