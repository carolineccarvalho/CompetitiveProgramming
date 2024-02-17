#include <bits/stdc++.h>

using namespace std;

int retornaMenor(int a, int b) {
  return a < b ? a : b;
}

int retornaMaior(int a, int b) {
  return a > b ? a : b;
}

int main()
{

int mergulhos, metros, n, resposta=0, anterior, booleano=0;
stack<int> menores;

cin >> mergulhos >> metros;
for(int i =0; i < mergulhos; i++){
    cin >> n;
    if(menores.empty()) menores.push(retornaMenor(n, metros-n));
    else{
        anterior = menores.top();
        if(anterior > retornaMenor(n,metros-n) && anterior > retornaMaior(n, metros-n)){
            booleano=1;
        }else if(anterior <= retornaMenor(n, metros-n)){
            menores.push(retornaMenor(n, metros-n));
        }else{
            menores.push(retornaMaior(n, metros-n));
        }
    }
}

while(!menores.empty()){
    resposta += menores.top();
    menores.pop();
}

if(booleano==1){
    cout << -1 << endl;
}else{
    cout << resposta << endl;
}
return 0;
}
