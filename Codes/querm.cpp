#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int tests, ticket;
    vector<int> participants;
    vector<int> winner;
    while(cin>>tests){
        if(tests == 0){
            break;
        }

        for(int i =0; i< tests; i++){
            cin >> ticket;
            participants.push_back(ticket);
        }

        for(int i =0; i< tests; i++){
            if(i+1== participants[i]){
                winner.push_back(i+1
                                 );
                break;
            }
        }

        participants.clear();
    }
    for(int i=0; i<winner.size();i++){
        cout << "Teste " << i + 1 << endl;
        cout << winner[i]<<endl;
        cout<<endl;
    }
    return 0;
}
