#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, px, py, res, tests;
    string in;
    set<vector<pair<int,int>>> coordenada;
    vector<pair<int,int>> segmento;
    vector<int> result;
    cin>> tests;

    for(int j=0; j<tests; j++){
        cin >> in;
        res=0;
        x=0;
        y=0;
        coordenada.clear();
        for(int i =0; i<in.size();i++){
        px=x;
        py=y;
        if(in[i]=='W')px--;
        else if(in[i]=='E')px++;
        else if(in[i]=='N')py++;
        else py--;

        segmento.clear();
        segmento.push_back(make_pair(x,y));
        segmento.push_back(make_pair(px,py));

        sort(segmento.begin(),segmento.end());
        if(coordenada.find(segmento)!= coordenada.end()) res++;
        else {
            res+=5;
            coordenada.insert(segmento);
        }
        x=px;
        y=py;
    }
    result.push_back(res);

    }

    for(auto it: result) cout << it << endl;

}
