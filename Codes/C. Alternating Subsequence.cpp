#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    long long tests, aux, tam;
    long long number;
    vector<long long> subsequence;
    cin>>tests;
    for(int i =0; i<tests; i++){
        cin >> tam;
        aux=0;
        subsequence.clear();
        for(int k=0; k<tam; k++){
            cin >> number;
            auto par = subsequence.end();
            par--;
            if(k==0){
                subsequence.push_back(number);
            }else if(number*(*par)<0){
                subsequence.push_back(number);
            }else{
                if(number > (*par)){
                    subsequence.pop_back();
                    subsequence.push_back(number);
                }
            }
        }
        for(int j=0; j<subsequence.size(); j++){
            aux+=subsequence[j];
        }

        cout << aux << endl;
    }

    return 0;
}
