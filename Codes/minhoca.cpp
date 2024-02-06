#include <iostream>

using namespace std;

int main()
{
    int lines, columns;
    cin>>lines>>columns;
    int matrix[lines][columns];
    int aux, sum=0;
    for(int i =0; i<lines;i++){
        for(int j=0;j<columns;j++){
            cin >> matrix[i][j];
        }
    }

    for(int i =0; i<lines;i++){
        aux=0;
        for(int j=0;j<columns;j++){
            aux += matrix[i][j];
        }
        if(sum == 0 || sum < aux){
            sum = aux;
        }
    }

    for(int j =0; j<columns;j++){
        aux=0;
        for(int i=0;i<lines;i++){
            aux += matrix[i][j];
        }
        if(sum < aux){
            sum = aux;
        }
    }

    cout << sum << endl;
    return 0;
}
