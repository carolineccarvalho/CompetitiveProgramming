#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, m, d, aux=0,c, resto, par=1;
    vector<int> ci;
    string resposta = "";

    cin >> n >> m >> d;
    for(int i = 0 ; i<m ; i++){
        cin >> c;
        aux+=c;
        ci.push_back(c);
    }

    resto = (n-aux)%(m+1);
    if((n-aux)/(m+1)>=d || ((n-aux)/(m+1)==(d-1) && (n-aux)%(m+1)!=0)){
        cout << "NO" << endl ;
    }else{
        resto = n-aux;
        while(1){
             if(resto < d){
                for(int i =0; i<resto; i++){
                    resposta+='0';
                    resposta+=' ';
                }
                for(int j=par-1; j<m; j++){
                    for(int i=0; i<ci[j]; i++){
                        resposta+=to_string(par);
                        resposta+=' ';
                    }
                    par++;
                }
                break;
            }else{
                 for(int i =1; i<d; i++){
                    resposta+='0';
                    resposta+=' ';
                    resto--;
                 }
                 for(int i=0;i<ci[par-1];i++){
                    resposta+=to_string(par);
                    resposta+=' ';
                 }
                 par++;

            }
        }
        cout << "YES" << endl;

        cout << resposta << endl;
        cout << endl;
    }


    return 0;
}
