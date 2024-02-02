#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b;
    int tests;
    int parameter;
    vector<int> values;
    cin>>tests;

    for(int i =0; i<tests; i++){
        cin >>a>>b;
        parameter =0;
        while(a%b!=0){
          a = a - parameter;
          parameter++;
          a+=parameter;
        }
        values.push_back(parameter);
    }

    for(auto it : values){
       cout << it << endl;
    }

    return 0;
}
