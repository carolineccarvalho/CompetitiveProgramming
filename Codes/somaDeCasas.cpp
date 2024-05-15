#include <bits/stdc++.h>

using namespace std;
int N, K;
vector<int> inteiros;

int main(){
   cin >> N;
   inteiros.resize(N);

   for(int i=0; i<N; i++){
        cin >> inteiros[i];
   }

   cin >> K;

   int l = 0;
   int r = N-1;

   while(l<=r){
        if(inteiros[l]+inteiros[r] == K){
            cout << inteiros[l] << " " << inteiros[r];
            return 0;
        }else if(inteiros[l]+inteiros[r] < K){
            l = l + 1;
        }else{
            r = r - 1;
        }
   }
}
