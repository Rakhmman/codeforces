#include <bits/stdc++.h>

#define ios ios_base::sync_with_stdio, cout.tie(0), cin.tie(0);
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define mp make_pair
#define NL cout << '\n';
#define EX exit(0)
#define all(s) s.begin(), s.end()

const long long MXN = 3e6 + 1;
const long long MNN = 1e3 + 1;
const long long MOD = 1e9 + 7;
const long long INF = 1e18;
const long long OO = 1e9 + 500;

typedef long long llong;
typedef long double ldub;

using namespace std;

llong n, q, b[MXN], ans, cnt, x, k = 1, mx = 1;

llong binpow(llong x, llong p){
    if(p == 0){
        return 1;
    }else if(p % 2 == 1){
        return binpow(x, p - 1) * x;
    }else{
        x = binpow(x, p / 2);
        return x * x;
    }
}


int main(){
    ios;
    //freopen("input.in", "r", stdin);
    //freopen("output.out", "w", stdout);
    cin >> n;
    while(1){
        llong x = (binpow(2, k) - 1) * binpow(2, k - 1);
        if(x > n){
            cout << mx;
            EX;
        }if(n % x == 0){
            mx = max(mx, x);
        }k++;
    }
    return 0;
}
