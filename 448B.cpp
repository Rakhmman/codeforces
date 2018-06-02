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

llong n, k, x, ans;
llong a[MXN], cnt[MXN];

int main () {
    //freopen ("input.txt", "r", stdin);
    cin >> n >> x >> k;
    for (llong i = 1; i <= n; ++ i) {
        cin >> a[i];
    } sort (a + 1, a + n + 1);
    llong l = 1, r = 0;
    for (llong i = 1; i <= n; ++ i) {
        llong L = max (a[i], ((a[i] - 1) / x * x) + (k * x));
        llong R = ((a[i] - 1) / x * x) + ((k + 1) * x) - 1;
        while (l <= n && a[l] < L) ++ l;
        while (r < n && a[r + 1] <= R) ++ r;
        ans += max (0LL, r - l + 1);
    } cout << ans;
    return 0;
}
