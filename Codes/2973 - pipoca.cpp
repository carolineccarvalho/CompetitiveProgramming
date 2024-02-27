#include <bits/stdc++.h>

using namespace std;

long long N, C, T;
vector<long long> p;

bool good(long long m){
    long long c=1, all = T*m;
    for(int i = 0; i<N; i++){
        if(all-p[i]>=0) all -= p[i];
        else{
            c++;
            all = T*m;
            i--;
        }
        if(c>C) return false;
    }
    return true;
}


int main()
{
    long long sum=0;
    cin>>N>>C>>T;

    p.resize(N);
    for(int i =0; i<N; i++){
        cin >> p[i];
        sum+=p[i];
    }

    long long l=0;
    long long r=sum;
    long long ans=1;
    while(l<=r){
        long long mid = l + (r-l)/2;
        if(good(mid)){
            ans = mid;
            r = mid - 1;
        }else l = mid+1;
    }

    cout << ans << endl;

}
