#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;


int main() {
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n, m; cin >> n >> m;
        int aux = 0;
        int ans=0;
        bool p = true;
        for(int j=0; j<n; j++){
            string entrada; cin >> entrada;
            int tamanho = entrada.size();
            if(aux+tamanho>m){
                p = false;
            }else if(p){
                aux+=tamanho;
                ans++;
                if(aux == m) p = false;
            }
        }
        cout << ans << endl;
    } 
    return 0;
}
 
