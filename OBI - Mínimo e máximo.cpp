#include <bits/stdc++.h>

using namespace std;
void menor(int &A, int &sum){
    int aux=A;
    int soma=0;
    while(aux>0){
        if(aux>=10){
            soma += aux%10;
            aux = aux/10;
        }else {soma += aux; aux=0;}
        }
    sum = soma;
}


int main()
{
    int S, A, B, soma=0, soma2=0, aux1, aux2;
    cin >> S >> A >> B;
    while(S != soma){
       menor(A, soma);
       A++;
    }

    while(S != soma2){
        menor(B, soma2);
        B--;
    }

    A--;
    B++;
    cout << A << endl;
    cout << B << endl;
    return 0;
}


