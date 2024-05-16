#include <bits/stdc++.h>

using namespace std;
int N, D;
vector<int> number;
vector<int> normal, inverso;

void build(){
    int aux = 0;
    normal.resize(N);
    inverso.resize(N);
    for(int i=0; i<N; i++){
        aux+=number[i];
        normal[i] = aux;
    }

    aux = 0;

    for(int i=0, j=N-1; i<N; i++, j--){
        aux+=number[j];
        inverso[i] = aux;
    }

    reverse(inverso.begin(), inverso.end());
}

int main(){
    int aux = 0;
    cin >> N;
    number.resize(N);

    cin >> D;

    for(int i=0; i<N; i++){
        cin >> number[i];
    }

    build();

    if(normal[N-1]<D){
		cout << "0" << endl;
		return 0;
	}
    int l=0;
    int r=1;
    int sum=number[0] + number[1];
    while(r <= N-1 && l <= N-1){
        if(sum == D){
            sum -= number[l];
            aux++; l++;
        }else if(sum <D){
            r++;
            sum += number[r];
        }else if(sum >D){
            sum -= number[l];
            l++;
        }
    }

    l=0;
    r=0;
    sum=normal[l] + inverso[r];
    while(r <= N-1 && l <= N-1){
        if(sum == D){
            aux++;
            r++;
            sum = normal[l] + inverso[r];
        }else if(sum < D){
            l++;
            sum = normal[l] + inverso[r];
        }else if(sum>D){
            r++;
            sum = normal[l] + inverso[r];
        }
    }

    cout << aux << endl;
}
