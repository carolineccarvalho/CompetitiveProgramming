#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tests, aux;
    string word1, word2;
    set<char> set1, set2;
    vector<char> result;
    cin >> tests;
    for(int i =0; i<tests; i++){
        cin >> word1 >> word2;
        aux =0;
        for(int j=0; j<word1.size(); j++){
            set1.insert(word1[j]);
        }

        for(int j=0; j<word2.size(); j++){
            set2.insert(word2[j]);
        }

        for(auto it: set1){
            if(set2.find(it)==set2.end()){
                result.push_back('N');
                aux++;
                break;
            }
        }
        if(aux==0){
            result.push_back('S');
        }

    }
        for(auto it: result){
            cout << it << endl;
        }

    return 0;
}
