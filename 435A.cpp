
#include <bits/stdc++.h>

#define ios ios_base::sync_with_stdio, cout.tie(0), cin.tie(0);
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define mp make_pair
#define NL cout << '\n';

const long long MXN = 1e6 + 1;
const long long MNN = 1e3 + 1;
const long long MOD = 1e9 + 7;
const long long INF = 1e18;
const long long OO = 1e9 + 500;

typedef long long llong;
typedef unsigned long long ulong;
typedef long double ldub;

using namespace std;

llong n, k, sum, x, y, ans, a, cnt, l , r;
llong c[MXN], b[MXN];
llong mx = -1, mn = INF;

int main(){
    ios;
    map<llong, llong> m;
    cin >> n >> x;
    for(int i = 1; i <= n; i++){
        cin >> b[i];
        m[b[i]] = 1;
    }for(int i = 0; i < x; i++){
        if(m[i] == 0){
            k++;
        }
    }if(m[x] == 1){
        k++;
    }cout << k;
    return 0;
}
