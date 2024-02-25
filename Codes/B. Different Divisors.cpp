#include <bits/stdc++.h>

using namespace std;
bool good(int n){
    for(int i =2; i<=sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main()
{
   ios_base::sync_with_stdio(0);cin.tie(0);
   int t;
   cin >> t;

   vector<int> primos;

   for(int i=0; i<t; i++){
        int d;
        cin >> d;

        for(int i = d; i<30000; i++){
            if(good(i)) primos.push_back(i);
        }

        int l = 0;
        int r = primos.size()-1;
        int ans;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(primos[mid]<d+1){
                l = mid + 1;
            }else{
                ans = primos[mid];
                r = mid - 1;
            }
        }

        l = 0;
        r = primos.size()-1;
        int ans2;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(primos[mid]<ans+d){
                l = mid + 1;
            }else{
                ans2 = primos[mid];
                r = mid - 1;
            }
        }

        cout << ans*ans2 << endl;

   }
}
