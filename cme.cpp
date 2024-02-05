#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int a=0,b=0,c=0;
    int palitos, tests, inicio;
    vector<int> resultado;
    cin>>tests;

    for(int i=0; i<tests; i++){
         cin >> inicio;
         palitos = inicio;
         a=0;
         b=0;
         c=0;
         while(1){
            if(a == 0 && b == 0){
                palitos-=4;
                a++;
                b++;
                c=c+2;
            }else if(palitos>0){
                if(palitos%2==0){
                    palitos = 0;
                    a=a+palitos/2;
                    c=c+palitos/2;
                }else{
                    palitos = 0;
                    a=a+palitos/2 + 1;
                    c=c+palitos/2;
                }
            }else{
                palitos -= (a+b)-c;
                break;
            }
        }
        resultado.push_back(abs(palitos));
}


    for(auto it: resultado){
        cout << it << endl;
    }

    return 0;
}
