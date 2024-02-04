#include <iostream>
#include <vector>
#include <math.h>
#include <string>

using namespace std;

int especial(int number){
    int potencia = 10;
    while(potencia <number){
        potencia*=10;
    }
    potencia/=10;
    return number%potencia;
}

int main()
{
    int tests,a,b;
    vector<string> numeros;
    cin >> tests;

    for(int i =0; i < tests; i++){
        cin>>a>>b;

        if(a>0 && b>0 || a<0 && b<0){
            if(!especial(abs(a)) && especial(abs(b))){
                numeros.push_back(to_string(abs(a)) + " x " +to_string(abs(b)-especial(abs(b))) + " + "+ to_string(abs(a))+" x " +to_string(especial(abs(b))));
            }else if(especial(abs(a)) && !especial(abs(b))){
                numeros.push_back(to_string(abs(a)-especial(abs(a))) + " x " +to_string(abs(b)) + " + "+ to_string(especial(abs(a)))+" x " +to_string(abs(b)));
            }else if(!especial(abs(a)) && !especial(abs(b))){
                numeros.push_back(to_string(abs(a)) + " x " +to_string(abs(b)));
            }
            else{
                numeros.push_back(to_string(abs(a)) + " x " +to_string(abs(b)-especial(abs(b))) + " + "+ to_string(abs(a))+" x " +to_string(especial(abs(b))));
            }
        }else{
            if(!especial(abs(a)) && especial(abs(b))){
                numeros.push_back("-" + to_string(abs(a)) + " x " +to_string(abs(b)-especial(abs(b))) + " - "+ to_string(abs(a))+" x " +to_string(especial(abs(b))));
            }else if(especial(abs(a)) && !especial(abs(b))){
                numeros.push_back("-" +to_string(abs(a)-especial(abs(a))) + " x " +to_string(abs(b)) + " - " + to_string(especial(abs(a)))+" x " +to_string(abs(b)));
            }else if(!especial(abs(a)) && !especial(abs(b))){
                numeros.push_back("-" +to_string(abs(a)) + " x " +to_string(abs(b)));
            }else{
                numeros.push_back("-"+to_string(abs(a)) + " x " +to_string(abs(b)-especial(abs(b))) + " - "+ to_string(abs(a))+" x " +to_string(especial(abs(b))));
            }
        }


        }



    for(auto it:numeros){
        cout << it << endl;
    }

    return 0;
}
