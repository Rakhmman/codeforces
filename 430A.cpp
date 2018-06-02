#include <bits/stdc++.h>

#define ios ios_base::sync_with_stdio; cout.tie(0); cin.tie(0);
#define S second
#define F first
#define pb push_back
#define nl '\n'
#define mp make_pair
#define NL; cout << '\n';

const long long MXN = 1e6 + 1;
const long long MNN = 1e3 + 1;
const long long MOD = 1e9 + 7;
const long long INF = 1e18;
const long long OO = 1e9 + 500;

typedef long long llong;
typedef unsigned long long ulong;

using namespace std;

llong n, m, k, sum, x, y, ans, a, cnt, l , r;
llong c[MXN], b[MXN];
llong mx = -1, mn = INF;

int main(){
    ios;
    cin >> l >> r >> x >> y >> k;
    for(int i = x; i <= y; i++){
        cnt = i * k;
        if(l <= cnt && r >= cnt){
            cout << "YES";
            return 0;
        }
    }cout << "NO";
    return 0;
}
