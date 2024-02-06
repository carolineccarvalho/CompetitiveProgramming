#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int prime(long long in){
    for(int i =2; i<=pow(in, 0.5);i++){
        if(in%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int tests;
    long long in;
    vector<string> result;

    cin >> tests;
    for(int i =0; i<tests; i++){
        cin>>in;
        if(prime(in)){
            result.push_back("Prime");
        }else{
            result.push_back("Not Prime");
        }
    }

     for(auto it: result){
        cout << it << endl;
     }

    return 0;
}
