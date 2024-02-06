#include <iostream>
#include <vector>
#include <math.h>

using namespace std;


int insertion_sort(vector<int> &vetor, vector<int> &indices){
    int minimus;
    int aux =0;
    int cont=0;
    for(int i =0; i<vetor.size(); i++){
        minimus = vetor[i];
        aux=i;
        for(int j = i; j<vetor.size();j++){
            if(vetor[j]<minimus){
                minimus = vetor[j];
                aux = j;
            }
        }
        if(vetor[i] != vetor[aux]) {
            swap(vetor[i],vetor[aux]);
            cont++;
            indices.push_back(i);
            indices.push_back(aux);
        }

    }

    return cont;
}

int main()
{
    int tests, number, all;
    vector<int> numbers;
    vector<int> indices;

    cin>>tests;

    for(int i =0; i<tests; i++){
        cin>>number;
        numbers.push_back(number);
    }

    all = insertion_sort(numbers, indices);

    cout<<all<<endl;

    if(all!=0){
        for(int i =0; i<indices.size()-1;i++){
        cout<<indices[i]<<" "<<indices[i+1]<<endl;
        i+=1;
        }
    cout << endl;
    }

    return 0;
}
