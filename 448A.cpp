#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define pb push_back
#define y1 road_to_respa_top_6
#define prev road_to_respa_top_6
#define mp make_pair
#define all(x) x.begin(), x.end()
#define android ios_base::sync_with_stdio(0), cin.tie (0), cout.tie (0)
#define bp __builtin_popcountll
#define sqr (x) (sqrt (x) * 1LL)
#define b_ctz __builtin_ctzll
#define b_clz __builtin_clzll

typedef long long llong;
typedef long double ldouble;
typedef vector <llong> vl;

const llong MXN = 1e6 + 1;
const llong MNN = 3e3 + 1;
const llong MOD = 1e9 + 7;
const llong INF = 1e18;

inline llong log2 (llong x) {return 64 - b_clz (x) - 1;};
inline llong __lcm (llong a, llong b) {return a / __gcd (a, b) * b;};

llong n, sum, xxx, mn = 361;
llong a[MXN], pref[MXN];

int main () {
    cin >> n;
    for (llong i = 1; i <= n; ++ i) {
        cin >> a[i];
        pref[i] = pref[i - 1] + a[i];
    } if (n == 1) return cout << 360, 0;
    for (llong i = 1; i <= n; ++ i) {
        for (llong j = i; j <= n; ++ j) {
            llong xxx = pref[j] - pref[i - 1], yyy = pref[n] - xxx;
            mn = min (mn, abs (xxx - yyy));
        }
    } cout << mn;
    return 0;
}
