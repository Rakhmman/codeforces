
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

llong n, m, k, sum, x, y, ans, a, cnt, l, r, res = 0;
llong c[MXN], b[MXN];
llong mx = -1, mn = INF;

int main(){
    ios;
    cin >> n >> x;
    if(n == 2 && x == 0){
        cout << "NO" << nl;
        return 0;
    }cout << "YES" << nl;
    if(n == 2 && x != 0){
        cout << 0 << ' ' << x;
        return 0;
    }if(n == 1){
        cout << x;
        return 0;
    }for(int i = 1; i <= n - 3; i++){
        cout << i << ' ';
        res ^= i;
    }if(res == x){
        cout << (1 << 17) << ' ' << (1 << 18) << ' ' << (1 << 18) + (1 << 17);
    }else{
        cout << ((1 << 17) ^ x ^ res) << ' ' << (1 << 17) << ' ' << 0;
    }return 0;
}
