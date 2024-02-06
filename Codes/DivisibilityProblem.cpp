#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    int tests;
    int parameter;
    cin>>tests;
    int values[tests];

    for(int i =0; i<tests; i++){
        cin >>a>>b;
        if(a%b==0){
            values[i] = 0;
        }
        else{
            parameter = b - a%b;
            values[i]=parameter;
        }
    }

    for(auto it : values){
       cout << it << endl;
    }

    return 0;
}
