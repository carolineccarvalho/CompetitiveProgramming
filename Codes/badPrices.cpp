#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int tests, numbers, n, aux, itera;
    vector<int> result;
    stack<int> searching;

    cin >> tests;

    for(int i =0; i<tests; i++){
        cin >> numbers;

        itera = 0;

        for(int j =0; j<numbers; j++){
            cin >> n;
            searching.push(n);
        }

        while (!searching.empty()) {
            aux = searching.top();
            searching.pop();
            if (!searching.empty() && searching.top() > aux) {  // Corrigido
                searching.pop();
                searching.push(aux);
                itera++;
            }
            }

        result.push_back(itera);
    }

    for(auto it: result){
        cout << it << endl;
    }


    return 0;
}
