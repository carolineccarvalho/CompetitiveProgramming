#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();
    int tests, number, k,qtd,l1,l2,l3;
    char letras[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n','o','p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int tamanho[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    string palavra = "";

    cin >> tests;
    for(int i =0; i< tests; i++){
        cin >> number;
        k=0;
        palavra = "";
        l1=number/3;
        l2=number/3;
        l3=number/3+number%3;

        if(l3 == 27){
            l2++;
            l3--;
        }

        while(l1>1 && l2>1 && l3<27 && l1<27 && l2<27){
            if(l3!=26){
                l1--;
                l3++;
                if(l3!=26){
                    l2--;
                    l3++;
                }
            }else if(l2!=26){
                l1--;
                l2++;
            }else{
                break;
            }
        }

        palavra += letras[l1-1];
        palavra += letras[l2-1];
        palavra += letras[l3-1];
        cout << palavra << endl;
    }
    return 0;
}
